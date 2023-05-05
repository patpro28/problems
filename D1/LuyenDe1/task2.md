# Dãy bội

<!-- https://atcoder.jp/contests/arc133/tasks/arc133_b -->

Cho hai hoán vị $P=(P_1,P_2,...,P_n)$ và $Q=(Q_1,Q_2,...,Q_n)$ của $1,2,...,n$.

Tìm hai dãy con (không cần liên tiếp) tương ứng của $P$ và $Q$ thoả mãn:

- Độ dài của hai dãy con bằng nhau.
- Gọi $a=(a_1,a_2,...,a_k)$ và $b=(b_1,b_2,...,b_k)$ là hai dãy con tương ứng của $P$ và $Q$. Ta có với mỗi $1\le i\le k$ thì $b_i$ là bội của $a_i$. (Tức là tồn tại số nguyên $x$ thoả mãn $b_i=a_i.x$).

Tìm dãy con có độ dài lớn nhất có thể.

## Input

- Dòng đầu chứa một số nguyên dương $n$.
- Dòng thứ hai chứa $n$ số nguyên dương $P_1,P_2,...,P_n$.
- Dòng thứ ba chứa $n$ số nguyên dương $Q_1,Q_2,...,Q_n$.

## Output

- Một số nguyên duy nhất là độ dài của dãy con lớn nhất tìm được.

## Constraints

- $1 \le n \le 2\times 10^5$

## Example

| Input                       | Output |
| --------------------------- | ------ |
| 4<br>3 1 4 2<br>4 2 1 3     | 2      |
| 5<br>1 2 3 4 5<br>5 4 3 2 1 | 3      |

