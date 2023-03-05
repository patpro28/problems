# Nhân ma trận 9

Cho dãy số $A$ được xây dựng từ công thức đệ quy sau:

$$
\begin{split}
   A_1&=1 \\
   A_2&=3 \\
   A_3&=11 \\
   A_n&=3\cdot A_{n-1}+2\cdot A_{n-2}+5\cdot A_{n-3}
\end{split}
$$

Cho một số nguyên dương $N$ tính, $A_N\pmod{10^9+7}$

## Input

- Một dòng chứa một số nguyên dương $N$.

## Output

- Một dòng chứa kết quả bài toán.

## Constraints

- $1\le N\le 10^9$

## Example

|Input|Output|
|-|-|
|10|143697|
