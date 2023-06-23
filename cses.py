import re
import requests
import getpass
from lxml import html, etree
from lxml.html import HtmlElement
from typing import Any, List, Tuple
from pathlib import Path
from functools import lru_cache
from urllib.request import urlretrieve

BASE_DIR = Path(__file__).resolve().parent

# List URL
BASE_URL = "https://cses.fi"
PROBLEMSET_URL = BASE_URL + "/problemset"
PROBLEM_URL = BASE_URL + "/problemset/task/"
RESULT_URL = PROBLEMSET_URL + "/view/"

# Authentication
USERNAME = "patpro28"
PASSWORD = "Back2algorithm"

# Color
ANSI_RESET = "\033[0m"
ANSI_RED = "\033[31m"
ANSI_GREEN = "\033[32m"
ANSI_YELLOW = "\033[33m"
ANSI_BLUE = "\033[34m"

def blue(text: str) -> str:
    return f"{ANSI_BLUE}{text}{ANSI_RESET}"

def red(text: str) -> str:
    return f"{ANSI_RED}{text}{ANSI_RESET}"

def green(text: str) -> str:
    return f"{ANSI_GREEN}{text}{ANSI_RESET}"

def login(nick: str = USERNAME, password: str = PASSWORD):
    # Get login page
    session_requests = requests.session()
    login_url = BASE_URL + "/login"
    result = session_requests.get(login_url)

    # Get hidden inputs
    tree = html.fromstring(result.text)
    authenticity_token = list(set(tree.xpath("//input[@name='csrf_token']/@value")))[0]

    # Create payload
    payload = {
        "nick": nick,
        "pass": password,
        "csrf_token": authenticity_token
    }

    # Perform login
    response = session_requests.post(
        login_url,
        data = payload,
        headers = dict(referer=login_url)
    )

    # Check result
    if response.status_code == 200:
    # Check the response content or other indicators of successful login
        if "Welcome" in response.text:
            print(green("Login successful."))
        else:
            print(red("Login unsuccessful."))
            exit(1)
    else:
        print("Login failed. Status code:", response.status_code)
        exit(1)

    return session_requests

def get_problemset(session_requests) -> List[Tuple[str, int]]:
    # Get problemset page
    result = session_requests.get(PROBLEMSET_URL)

    # Get problems
    tree = html.fromstring(result.content)
    problems = tree.xpath("//li[@class='task']/a")

    # Get problem names and links
    rex = re.compile(r"[0-9]+")
    problems = [(problem.text, int(rex.findall(problem.attrib["href"])[0])) for problem in problems]

    return problems

def get_problem_dir(problem: int) -> Path:
    # Get Problem directory
    problem_dir = BASE_DIR / "cses" / str(problem)

    # Create directory if it doesn't exist
    problem_dir.mkdir(parents=True, exist_ok=True)

    return problem_dir

def get_test_cases_dir(problem: int) -> Path:
    # Get testcase directory
    test_cases_dir = get_problem_dir(problem) / "test_cases"

    # Create directory if it doesn't exist
    test_cases_dir.mkdir(parents=True, exist_ok=True)

    return test_cases_dir

@lru_cache(maxsize=None)
def get_solution_link(session_requests, problem: int):
    # Get result page
    result = session_requests.get(RESULT_URL + str(problem))

    # Get result
    tree = html.fromstring(result.content)
    accepted_result: HtmlElement = tree.xpath("//tr[td[contains(@class, 'full')]]")[0]

    solution_link: str = BASE_URL + accepted_result.xpath("td/a[contains(@class, 'details-link')]/@href")[0]

    return solution_link

def get_solution(session_requests, problem: int):
    # Get solution link
    solution_link = get_solution_link(session_requests, problem)

    # Get detail solution page
    result = session_requests.get(solution_link)

    # Get Problem directory
    problem_dir = get_problem_dir(problem)

    # Get solution
    tree = html.fromstring(result.content)
    
    solution: HtmlElement = tree.xpath("//pre[contains(@class, 'linenums')]")[0]

    code = solution.text_content()

    with open(problem_dir / "solution.cpp", "w") as f:
        f.write(code)


def get_test_cases(session_requests, problem: int):
    print(green(f"Start download test cases for problem {problem}"))
    # Get solution link
    solution_link = get_solution_link(session_requests, problem)

    # Get detail solution page
    result = session_requests.get(solution_link)

    # Get test cases
    tree = html.fromstring(result.content)
    
    test_cases: List[str] = tree.xpath("//div[@class='samp-actions']/a[contains(@class, 'save')]/@href")

    # Get test cases directory
    test_cases_dir = get_test_cases_dir(problem)

    # Write test cases
    index = 0
    for i, test_case in enumerate(test_cases):
        if i % 3 == 0:
          print(f"Downloading test case {index} input ...", end=' ')
          urlretrieve(BASE_URL + test_case, test_cases_dir / f"test_{index:02d}.in")
          print("Done!")
        if i % 3 == 1:
          print(f"Downloading test case {index} output ...", end=' ')
          urlretrieve(BASE_URL + test_case, test_cases_dir / f"test_{index:02d}.out")
          print("Done!")
          index += 1
        pass
    
if __name__ == "__main__":
    # Login
    username = input("Username: ")
    password = getpass.getpass("Password: ")
    if username and password:
      session_requests = login(username, password)
    else:
      session_requests = login()
    # Get problemset
    problems = get_problemset(session_requests)

    problem = int(input(blue("Problem ID: ")))

    # Check problem in problemset
    if problem not in [p[1] for p in problems]:
        print(red(f"Problem {problem} not in solved problemset"))
        exit(1)

    # Get solution
    get_solution(session_requests, problem)

    # Get test cases
    get_test_cases(session_requests, problem)