# Nhân ma trận 22

Cho hai dãy số $A, B$ được xây dựng từ công thức đệ quy sau:

$$
A_1=1, B_1=2
$$

$$
\begin{split}
   A_n&=a\cdot A_{n-1}+b\cdot B_{n-1} \\
   B_n&=c\cdot A_{n-1}+d\cdot B_{n-1}
\end{split}
$$

Trong đó $a,b,c,d$ là $4$ số nguyên cho trước.

Cho một số nguyên dương $N$ tính:

$$
\sum_{i=1}^{N}{A_i\cdot B_i}\pmod{10^9+7}
$$

## Input

- Dòng đầu chứa một số nguyên $T$ là số bộ test.
- $T$ dòng tiếp theo, mỗi dòng chứa $5$ số nguyên $a, b, c, d, N$.

## Output

- $T$ dòng chứa kết quả bài toán.

## Constraints

- $1\le T\le 100$
- $|a|,|b|,|c|,|d|\le 100$
- $1\le N\le 10^{18}$

## Example

|Input|Output|
|-|-|
|3<br>4 2 0 4 2<br>2 0 1 4 5<br>4 0 4 0 5|66<br>11532<br>69906|
