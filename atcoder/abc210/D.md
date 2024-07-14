Đất nước TM có thể được mô tả dưới dạng một lưới các ô vuông với $H$ hàng và $W$ cột. Gọi $(i,j)$ là ô vuông tại hàng thứ $i$ từ trên xuống và cột thứ $j$ từ trái sang phải.

Gần đây, ngày càng có nhiều yêu cầu của người dân về việc xây dựng đường sắt. Và bây giờ, lãnh đạo của đất nước không có lựa chọn nào khác ngoài việc xây dựng đường sắt. Việc xây dựng đường sắt bao gồm 2 giai đoạn:

- Đầu tiên, chọn 2 ô vuông khác nhau và xây dựng 1 nhà ga ở mỗi ô. Chi phí cần để xây dựng nhà ga ở ô $(i, j)$ là $A_{ij}$
- Sau đó, xây dựng đường ray nối 2 nhà ga này. Chi phí là $C \times (|i−i'| + |j - j'|)$ nếu 2 nhà ga ở ô vuông $(i, j)$ và $(i',j')$. Nhiệm vụ của bạn là hãy tính toán chi phí nhỏ nhất để xây dựng theo yêu cầu trên.

## Input

- Dòng đầu gồm 3 số nguyên $H, W$ và $C$.
- $H$ dòng tiếp theo, dòng thứ $i$ chứa $W$ số $A_{i,1},A_{i,2}, ..., A_{i,w}$.

## Output

In ra chi phí nhỏ nhất để xây dựng đường sắt

## Constraints

- $2 \leq H, W \leq 1000$
- $1 \leq C \leq 10^9$
- $1 \leq A_{i,j} \leq 10^9$

## Example

| Input                                  | Output | Explanation                                |
| -------------------------------------- | ------ | ------------------------------------------ |
| 3 4 2<br>1 7 7 9<br>9 6 3 7<br>7 8 6 4 | 10     | Xây dựng nhà ga tại ô $(1, 1)$ và $(2, 3)$ |
