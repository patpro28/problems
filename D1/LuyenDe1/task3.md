# Tổng hàng cột

<!-- https://atcoder.jp/contests/arc133/tasks/arc133_c -->

Cho một lưới các ô vuông gồm $H$ hàng và $W$ cột.

Thế Anh muốn viết lên từng ô vuông một số nguyên trong đoạn từ $0$ đến $K-1$. Đồng thời phải thoả mãn các điều kiện sau:

- Với mỗi $1\le i\le H$, tổng các ô thuộc hàng $i$ khi chia dư cho $K$ phải bằng $A_i$.
- Với mỗi $1\le j\le W$, tổng các ô thuộc cột $j$ khi chia dư cho $K$ phải bằng $B_j$.

Thế Anh biết có nhiều cách để tạo được lưới như vậy. Thế Anh muốn tìm cách tạo lưới sao cho tổng các số trên lưới là lớn nhất có thể. Hãy lập trình tìm tổng lớn nhất đó.

## Input

- Dòng đầu chứa 3 số nguyên $H$, $W$, $K$.
- Dòng thứ hai chứa $H$ số nguyên $A_1,A_2,...,A_H$.
- Dòng thứ ba chứa $W$ số nguyên $B_1,B_2,...,B_W$.

## Output

- Một số nguyên duy nhất là tổng lớn nhất có thể tạo được.
- Nếu không có cách tạo lưới thỏa mãn thì in ra `-1`.

## Constraints

- $1 \le H,W \le 2\times 10^5$
- $2 \le K \le 2\times 10^5$
- $0 \le A_i, B_i < K$

## Example

| Input                   | Output |
| ----------------------- | ------ |
| 2 4 3<br>0 2<br>1 2 2 0 | 11     |
| 3 3 4<br>0 1 2<br>1 2 3 | -1     |