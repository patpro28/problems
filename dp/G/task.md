Cho một đơn đồ thị có hướng $G$ gồm $N$ đỉnh và $M$ cạnh. Các đỉnh được đánh số từ $1$ đến $N$. $G$ không chứa chu trình có hướng.

Tìm độ dài đường đi dài nhất trên $G$. Độ dài một đường đi được tính bằng số lượng cạnh trên đường đi đó.

## Input

- Dòng đầu tiên chứa hai số nguyên $N$ và $M$.
- $M$ dòng tiếp theo, mỗi dòng chứa hai số nguyên $u$ và $v$ ($1 \le u, v \le N$) thể hiện một cạnh từ $u$ đến $v$.

## Output

- In ra một số nguyên duy nhất là độ dài đường đi dài nhất trên $G$.

## Constraints

- $2 \le N \le 10^5$
- $1 \le M \le 10^5$

## Example

| Input                                                               | Output |
| ------------------------------------------------------------------- | ------ |
| 4 5<br/>1 2<br/>1 3<br/>3 2<br/>2 4<br/>3 4                         | 3      |
| 6 3<br/>2 3<br/>4 5<br/>5 6                                         | 2      |
| 5 8<br/>5 3<br/>2 3<br/>2 4<br/>5 2<br/>5 1<br/>1 4<br/>4 3<br/>1 3 | 3      |