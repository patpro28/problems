from re import split as resplit

from dmoj.result import CheckerResult
from dmoj.utils.unicode import utf8bytes


def wa(message):
    return CheckerResult(False, 0, message)

def check(process_output, judge_output, judge_input, **kwargs):
    input_lines = judge_input.splitlines()
    judge_lines = list(filter(None, resplit(b'[\r\n]', utf8bytes(judge_output))))
    process_lines = list(filter(None, resplit(b'[\r\n]', utf8bytes(process_output))))

    n = int(input_lines[0])
    a = list(map(int, input_lines[1].split()))
    ans = int(judge_lines[0])
    out = int(process_lines[0])
    dem = 0
    if out <= 1 or out > 10**6:
        return wa("Out of range")
    for x in a:
        if x % ans == 0:
            dem += 1
        if x % out == 0:
            dem -= 1
    if dem != 0:
        return wa("Wrong answer")
    return True
