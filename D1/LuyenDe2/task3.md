<!-- https://atcoder.jp/contests/arc132/tasks/arc132_c -->

Cho một dãy số nguyên $a_1,a_2,\dots,a_n$ bao gồm các số nguyên từ $1$ đến $n$ và $-1$, kèm với một số nguyên $d$. Có bao nhiêu dãy số nguyên $p_1,p_2,\dots,p_n$ thỏa mãn:

- $p_1,p_2,\dots,p_n$ là một hoán vị của $1,2,\dots,n$.
- Với mỗi $i$ thỏa mãn $1\le i\le n$, $a_i=p_i$ nếu $a_i\neq -1$. Tức là dãy $p$ được tạo ra từ dãy $a$ bằng cách thay thế các vị trí $-1$.
- Với mỗi $i$ thỏa mãn $1\le i\le n$, $|p_i-i|\le d$.

## Input

- Dòng đầu chứa hai số nguyên $n$ và $d$.
- Dòng thứ 2 chứa $n$ số nguyên $a_1,a_2,\dots,a_n$.

## Output

- In ra số lượng dãy số nguyên $p_1,p_2,\dots,p_n$ thỏa mãn module cho $998244353$.

## Constraints

- $1\le d\le 5$
- $d< n\le 500$
- $a_i=-1$ hoặc $1\le a_i\le n$.
- $|a_i-i|\le d$ nếu $a_i\neq-1$.
- $a_i\neq a_j$ nếu $i\neq j$ và $a_i\neq -1$ và $a_j\neq -1$.

## Example

| Input              | Output |
| ------------------ | ------ |
| 4 2 <br> 3 -1 1 -1 | 2      |