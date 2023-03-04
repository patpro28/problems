# Nhân ma trận 21

Cho dãy số $A$ được xây dựng từ công thức đệ quy sau:

$$
A_1=1, A_2=3, A_n=3\cdot A_{n-1}-2\cdot A_{n-2}
$$

Cho một số nguyên dương $N$ tính:

$$
\sum_{i=1}^{n}{i\cdot A_i}\pmod{10^9+7}
$$

## Input

- Dòng đầu chứa một số nguyên $T$ là số bộ test.
- $T$ dòng tiếp theo, mỗi dòng chứa một số nguyên dương $N$.

## Output

- $T$ dòng chứa kết quả bài toán.

## Constraints

- $1\le T\le 100$
- $1\le N\le 10^9$

## Example

|Input|Output|
|-|-|
|2<br>3<br>6|28<br>621|
