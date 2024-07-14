# Bài 4: Bài Toán Dãy Số

Với hai số nguyên dương $x$ và $y$, định nghĩa $f(x, y)$ là phần dư của $(x + y)$ khi chia cho $10^8$.

Bạn được cho một dãy số nguyên dương $A = (A_1, \ldots, A_N)$ có độ dài $N$. Hãy tìm giá trị của biểu thức sau:

$$
\sum_{i=1}^{N-1} \sum_{j=i+1}^{N} f(A_i, A_j)
$$

## Đầu vào

- Dòng đầu tiên chứa số nguyên $N$ $(2\le N\le 3\times 10^5)$ - độ dài của dãy số.
- Dòng thứ hai chứa $N$ số nguyên $A_1, A_2, \ldots, A_N$ $(1\le A_i<10^8)$.

## Đầu ra

- Gồm một dòng chứa một số nguyên là giá trị của biểu thức đã cho.

## Ví dụ

| Input                    | Output    |
| ------------------------ | --------- |
| 3<br>1 2 3               | 12        |
| 3<br>3 50000001 50000002 | 100000012 |

## Giới hạn

- **Subtask 1 ($10\%$ điểm)**: $2 \leq N \leq 1000$.
- **Subtask 2 ($20\%$ điểm)**: $1 \le A_i \le 10^6$.
- **Subtask 3 ($70\%$ điểm)**: Không có ràng buộc thêm.