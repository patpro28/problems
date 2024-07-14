Có $N$ người được đánh số từ $1$ đến $N$. 

Bạn cần sắp xếp lại mọi người dựa vào một dãy điều kiện $A = (a_1, a_2, \dots, a_N)$, trong đó $a_i$ là số nguyên dương.

- $a_i=-1$ nghĩa là người thứ $i$ đứng đầu hàng.
- $a_i=j\ne -1$ nghĩa là người thứ $i$ đứng ngay sau người thứ $j$.

In ra dãy chỉ số của $N$ người tính từ đầu hàng sau khi sắp xếp.

## Input

- Dòng đầu tiên chứa số nguyên $N$ $(1 \leq N \leq 3\times10^5)$.
- Dòng thứ hai chứa $N$ số nguyên $a_1, a_2, \dots, a_N$ $(a_i = -1\text{ or }1\leq a_i \leq N)$.
- Có chính xác một cách sắp xếp thỏa mãn điều kiện đã nêu.

## Output

- In ra dãy chỉ số của $N$ người sau khi sắp xếp.

## Example

| Input             | Output      |
| ----------------- | ----------- |
| 6<br>3 -1 5 1 2 4 | 2 5 3 1 4 6 |