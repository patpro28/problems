# Nhân ma trận 13

Cho dãy số $A$ được xây dựng từ công thức đệ quy sau:

$$
A_1=1, A_2=2, A_n=2\cdot A_{n-1}+3\cdot A_{n-2}
$$

Cho một số nguyên dương $N$ tính:

$$
A_1 + A_2 + \cdots + A_N \pmod{10^9+7}
$$

## Input

- Dòng đầu chứa một số nguyên $T$ là số bộ test.
- $T$ dòng tiếp theo, mỗi dòng chứa một số nguyên dương $N$.

## Output

- $T$ dòng chứa kết quả bài toán.

## Constraints

- $1\le T\le 100$
- $1\le N\le 10^{18}$

## Example

|Input|Output|
|-|-|
|1<br>10|22143|
