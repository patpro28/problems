Cho một dãy số nguyên $A=A_1,A_2,...,A_N$ chí chứa các số $0, 1, 2$ và một xâu $S$ độ dài $N$ chỉ chứa $3$ kí tự `M`, `E`, `X`.

Tính tổng của tất cả $\text{mex}(A_i,A_j,A_k)$ với $1\le i<j<k\le N$ và $S_iS_jS_k=$`MEX`.

Ở đây, $\text{mex}(a, b, c)$ là số nguyên không âm nhỏ nhất không xuất hiện trong dãy $a, b, c$. Ví dụ, $\text{mex}(1, 2, 3)=0$, $\text{mex}(0, 1, 3)=2$.

## Input

- Dòng đầu tiên chứa số nguyên $N$ $(3 \le N \le 2\times10^5)$.
- Dòng thứ hai chứa $N$ số nguyên $A_1, A_2, \dots, A_N$ $(0 \le A_i \le 2)$.
- Dòng cuối cùng chứa xâu $S$ độ dài $N$ chỉ chứa các kí tự `M`, `E`, `X`.

## Output

- In ra kết quả tìm được.

## Example

| Input                                                  | Output |
| ------------------------------------------------------ | ------ |
| 4<br>2 0 1 0<br>MEXX                                   | 4      |
| 15<br>1 2 2 0 1 2 0 2 0 0 1 0 0 2 2<br>EXMMXEXEMEEEXMM | 19     |

## Explanation

Ở ví dụ $1$, ta có 2 bộ thoả mãn là $(i, j, k) = (1, 2, 3), (1, 2, 4)$. Từ đó $\text{mex}(A_1, A_2, A_3) = \text{mex}(2, 0, 1) = 3$, $\text{mex}(A_1, A_2, A_4) =\text{mex}(2, 0, 0) = 1$. Vậy kết quả là $3 + 1 = 4$.