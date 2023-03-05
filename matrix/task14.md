# Nhân ma trận 14

Cho dãy số $A$ được xây dựng từ công thức đệ quy sau:

$$
\begin{split}
   A_1&=1 \\
   A_n&=2\cdot A_{n-1}+n
\end{split}
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
- $1\le N\le 10^9$

## Example

|Input|Output|
|-|-|
|2<br>6<br>10|219<br>4017|
