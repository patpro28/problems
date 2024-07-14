Có $N$ người đánh số từ $1$ đến $N$ thực hiện tung đồng xu một số lần. Chúng ta thống kê được rằng kết quả tung đồng xu của người thứ $i$ là $A_i$ mặt ngửa và $B_i$ mặt sấp. Tỉ số tung đồng xu thành công của người thứ $i$ được định nghĩa là $\frac{A_i}{A_i+B_i}$.

Hãy sắp xếp tất cả các người theo thứ tự tăng dần của tỉ số tung đồng xu thành công. Nếu có nhiều người có cùng tỉ số tung đồng xu thành công, hãy sắp xếp theo thứ tự tăng dần của số thứ tự của họ.

## Input

- Dòng đầu tiên chứa số nguyên $N$ $(2 \le N \le 2 \times 10^5)$.
- $N$ dòng tiếp theo, mỗi dòng chứa hai số nguyên $A_i$, $B_i$ $(0 \le A_i, B_i \le 10^9)$.

## Output

- In ra $N$ số nguyên là thứ tự sau khi sắp xếp.

## Constraints

- $A_i + B_i > 0$.

## Example

| Input                  | Output | Explanation                                                                                                              |
| ---------------------- | ------ | ------------------------------------------------------------------------------------------------------------------------ |
| 3<br>1 3<br>3 1<br>2 2 | 2 3 1  | Tỉ lệ thành công của mỗi người lần lượt là $0.25, 0.75, 0.5$. Sắp xếp theo thứ tự tăng dần ta được kết quả là $2, 3, 1$. |