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

    try:
        try:
            k = int(process_lines[0])
        except IndexError:
            return wa("Không có output")

        if k > n:
            return wa("Quá nhiều thao tác")

        if len(judge_lines) != k + 1:
            return wa("Số lượng thao tác không đúng")
        
        a = list(map(int, input_lines[1].split()))
        for i in range(k):
            x, y = map(int, process_lines[i + 1].split())
            try:
                a[x - 1], a[y - 1] = a[y - 1], a[x - 1]
            except IndexError:
                return wa(f"Sai chỉ số ({x}, {y})")
        
        if a != list(range(1, n + 1)):
            return wa("Sắp xếp sai")

    except ValueError:
        return wa("Sai định dạng output")

    return True
