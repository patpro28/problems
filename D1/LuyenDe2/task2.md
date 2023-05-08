# Chuyển và đảo

Cho một hoán vị $p_1,p_2,\dots,p_n$ của $1,2,\dots,n$. Bạn có thể thực hiện một trong 2 thao tác dưới đây một số lần bất kì:

- Đảo ngược hoán vị hiện tại. Ví dụ: $1,2,3,4\to 4,3,2,1$.
- Chuyển phần tử ở đầu về cuối. Ví dụ: $1,2,3,4\to 2,3,4,1$.

Tìm số lượng thao tác ít nhất để sắp xếp hoán vị thành $1,2,\dots,n$. Trong đầu vào, hoán vị chắc chắn có thể sắp xếp được.

## Input

- Dòng đầu chứa số nguyên $n$.
- Dòng thứ 2 chứa $n$ số nguyên $p_1,p_2,\dots,p_n$.

## Output

- In ra số lượng thao tác ít nhất để sắp xếp hoán vị thành $1,2,\dots,n$.

## Constraints

- $2\le n\le 10^5$

## Example

| Input      | Output |
| ---------- | ------ |
| 3<br>1 3 2 | 2      |