# SHTH

Tổ hợp là một tập hợp các phần tử không có thứ tự cụ thể nào. Nói cách khác, tổ hợp là một tập hợp các phần tử không phân biệt với nhau và thứ tự của chúng không quan trọng. Ví dụ, tập hợp $\{1, 2\}$ và tập hợp $\{2, 1\}$ đều được coi là cùng một tổ hợp. Trong toán học, ký hiệu để biểu diễn tổ hợp của một tập hợp các phần tử là ký hiệu "C", được định nghĩa như sau:

$$
C^k_n=\begin{pmatrix} n \\ k \end{pmatrix}=\frac{n!}{k!\times (n-k)!}
$$

Trong đó $n$ là số lượng phần tử của tập hợp ban đầu và $k$ là số lượng phần tử được chọn để tạo thành tổ hợp.

Cho một tập hợp $A$ gồm $N$ số nguyên dương đầu tiên. Sắp xếp các tổ hợp chập $K$ của $A$ theo thứ tự từ điển và đánh số hiệu bắt đầu từ $1$.

Yêu câu:

- Cho số hiệu của một tổ hợp chập $K$ của $A$. Tìm tổ hợp đấy.
- Cho một tổ hợp chập $K$ của $A$, tìm số hiệu của nó.

## Input

- Dòng đầu chứa 2 số nguyên dương $N, K$.
- Dòng 2 chứa một số nguyên dương $P$ là số hiệu của một tổ hợp.
- Dòng 3 chứa $K$ số nguyên $B_i$ là một tổ hợp chập $K$ của $A$.

## Output

- Dòng 1 in ra tổ hợp tương ứng với số hiệu $P$.
- Dòng 2 in ra một số là số hiệu của tổ hợp $B$.

## Constraints

- $1\le K\le N\le 300$.
- $1\le P\le C^k_n$
- $B_1< B_2<...< B_K$.

## Example

| Input           | Output   |
| --------------- | -------- |
| 3 2<br>2<br>2 3 | 1 3<br>3 |

