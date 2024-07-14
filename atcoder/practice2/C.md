Cho 4 số nguyên không âm $N,M,A,B$. Tính:

$$
\sum^{N-1}_{i=0}{\left\lfloor\frac{A\times i + B}{M}\right\rfloor}
$$

## Input
- Dòng đấu chứa một số nguyên dương $T$ là số bộ thử của bài toán.
- $T$ dòng tiếp theo, mỗi dòng chứa $4$ số nguyên không âm $N,M,A,B$.

## Output
- Gồm $T$ dòng, mỗi dòng trả lời kết quả của bài toán tương ứng.

## Constraints
- $1\le T\le 10^5$
- $1\le N,M\le 10^9$
- $0\le A,B<M$

## Sample Input

    5
    4 10 6 3
    6 5 4 3
    1 1 0 0
    31415 92653 58979 32384
    1000000000 1000000000 999999999 999999999


## Sample Output

    3
    13
    0
    314095480
    499999999500000000
