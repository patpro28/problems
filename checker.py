from re import split as resplit

from dmoj.result import CheckerResult
from dmoj.utils.unicode import utf8bytes


def wa(message):
    return CheckerResult(False, 0, message)


def check(process_output, judge_output, judge_input, **kwargs):
    input_lines = judge_input.splitlines()
    judge_lines = list(filter(None, resplit(b'[\r\n]', utf8bytes(judge_output))))
    process_lines = list(filter(None, resplit(b'[\r\n]', utf8bytes(process_output))))
    s = input_lines[0]
    t = input_lines[1]
    if len(judge_lines) != len(process_lines):
        return wa("Wrong answer")
    if len(judge_lines) == 0:
        return True
    p = process_lines[0]
    # check p is a LCS of s and t
    i, j, k = 0, 0, 0
    n = len(s)
    m = len(t)
    o = len(p)
    while i < n and j < m and k < o:
        while i < n and s[i] != p[k]:
            i += 1
        while j < m and t[j] != p[k]:
            j += 1
        if i == n or j == m:
            return wa("Wrong answer")
        i += 1
        j += 1
        k += 1

    if k < o:
        return wa("Wrong answer")
    return True
