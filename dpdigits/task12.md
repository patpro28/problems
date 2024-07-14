Cho số nguyên dương $N$, dãy Calalan cấp $N$ là dãy số $C_0, C_1, \dots, C_{2N}$ được định nghĩa như sau:

- $C_0 = C_{2N} = 0$
- $|C_i-C_{i+1}| = 1$ với $0 \le i \le 2N-1$
- $C_i \ge 0$ với $0 \le i \le 2N-1$

Sắp xếp các dãy Catalan theo thứ tự từ điển, đánh số hiệu cho chúng tăng dần từ $1$. Yêu cầu:

1. Cho một số nguyên dương $P$. Tìm dãy Catalan cấp $N$ có hiệu số $P$.
2. Cho một dãy Catalan cấp $N$. Tìm số hiệu của dãy đó trong thứ tự từ điển.

## Input

- Dòng đầu tiên chứa số nguyên dương $N$.
- Dòng thứ hai chứa số nguyên dương $P$.
- Dòng thứ ba chứa $2N+1$ số nguyên không âm $D_0, D_1, \dots, D_{2N}$ là một dãy Catalan cấp $N$.

## Output

- Dòng đầu tiền chứa $2N+1$ số nguyên không âm $C_0, C_1, \dots, C_{2N}$ là dãy Catalan cấp $N$ có hiệu số $P$.
- Dòng thứ hai chứa số nguyên dương $Q$ là số hiệu của dãy $D_0, D_1, \dots, D_{2N}$ trong thứ tự từ điển.

## Constraints

- $1 \le N \le 500$

## Example

| Input                        | Output                  |
| ---------------------------- | ----------------------- |
| 4<br>11<br>0 1 2 3 2 1 2 1 0 | 0 1 2 3 2 1 0 1 0<br>12 |
