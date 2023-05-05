# Xoá giá trị

<!-- https://atcoder.jp/contests/arc133/tasks/arc133_a -->

Cho một dãy số nguyên dương $A = (A_1,A_2,...,A_n)$.

Thế Anh muốn chọn một giá trị thuộc dãy $A$. Giả sử $x$ là giá trị được chọn. Sau đó, Thế Anh sẽ tạo một dãy $B$ bằng cách lấy ra tất cả các số có giá trị khác $x$ trong $A$ và giữ nguyên thứ tự.

Tìm các chọn $x$ sao cho $B$ có thứ tự từ điển nhỏ nhất.

## Input

- Dòng đầu chứa một số nguyên dương $n$.
- Dòng thứ hai chứa $n$ số nguyên dương $A_1,A_2,...,A_n$.

## Output

- Một dòng ghi ra dãy $B$ có thứ tự từ điển nhỏ nhất. Nếu dãy $B$ rỗng thì in ra `empty`.

## Constraints

- $1 \le n \le 2\times 10^5$
- $1 \le A_i \le N$

## Example

| Input          | Output |
| -------------- | ------ |
| 5<br>2 4 4 1 2 | 2 1 2  |
| 3<br>1 1 1     | empty  |