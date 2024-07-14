<!-- https://atcoder.jp/contests/abc161/tasks/abc161_c -->

Cho một số nguyên không âm $N$. Bạn có thể thực hiện thao tác sau $0$ hoặc nhiều lần:

- Thay thế số $N$ bằng $|N-K|$.

Tính giá trị nhỏ nhất có thể đạt được của $N$ trong quá trình thực hiện các thao tác trên.

## Input

- Một dòng chứa hai số nguyên $N$ và $K$ $(1 \leq N, K \leq 10^{18})$.

## Output

- Một số nguyên duy nhất là giá trị nhỏ nhất có thể đạt được của $N$.

## Ví dụ

| Input | Output |
| ----- | ------ |
| 7 4   | 1      |
| 2 6   | 2      |
| 10 1  | 0      |