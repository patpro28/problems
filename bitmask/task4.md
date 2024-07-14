Hệ thập lục phân là một hệ đếm có cơ số là 16. Các chữ số của hệ thập lục phân là các chữ số từ $0$ đến $9$ và các chữ cái từ $A$ đến $F$. Ví dụ, số $123$ được viết là `7B` trong hệ thập lục phân ($123 = 7 \cdot 16^1 + B \cdot 16^0$).

Hai số nguyên dương $A$ và $B$ được gọi là bạn của nhau nếu chúng có chung ít nhất một chữ số chung khi được viết trong hệ cơ số thập lục phân. Chữ số chung này có thể là một chữ số từ $0$ đến $9$ hoặc một chữ cái từ $A$ đến $F$.

Cho một mảng $A$ gồm $N$ số nguyên dương. Hãy tìm số lượng cặp $i<j$ thoả mãn $A[i]$ và $A[j]$ là bạn của nhau.

## Input

- Dòng đầu tiên chứa số nguyên dương $N$.
- Dòng thứ hai chứa $N$ số nguyên dương $A_1, A_2, \dots, A_N$.

## Output

- Với mỗi test, in ra số lượng cặp $i<j$ thoả mãn $A[i]$ và $A[j]$ là bạn của nhau.

## Constraints

- $1 \le N \le 10^6$
- $1 \le A_i \le 10^{18}$

## Example

| Input                                  | Output |
| -------------------------------------- | ------ |
| 2<br>3<br>10 12 24<br>4<br>10 11 211 3 | 2<br>3 |