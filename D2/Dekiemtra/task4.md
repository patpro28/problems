# Bài 4: Bộ 3 chỉ số

Cho một dãy số nguyên dương $A = (A_1,A_2,\ldots,A_N)$ gồm $N$ phần tử.

Đếm số bộ 3 chỉ số $(i,j,k)$ thoả mãn tất cả điều kiện dưới đây:

- $1 \leq i,j,k \leq N$.
- $\frac{A_i}{A_j} = A_k$.

## Dữ liệu vào

- Dòng đầu tiên chứa số nguyên $N$ $(1 \leq N \leq 2\times 10^5)$.
- Dòng thứ hai chứa $N$ số nguyên $A_1,A_2,\ldots,A_N$ $(1 \leq A_i \leq 2\times 10^5)$.

## Dữ liệu ra

- In ra một số nguyên là số bộ 3 chỉ số $(i,j,k)$ thoả mãn điều kiện đã nêu.

| Input                      | Output |
| -------------------------- | ------ |
| 3<br>6 2 3                 | 2      |
| 10 <br>1 3 2 4 6 8 2 2 3 7 | 62     |

