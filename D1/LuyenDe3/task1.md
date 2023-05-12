# Sao chép đồ thị

Cho một ma trận kích thước $N\times N$ là $A = (a_{i,j})$, với $a_{i,j}\in\{0,1\}$.

Chúng ta sẽ xây dựng một đồ thị có hướng như sau:

- Đồ thị gồm có $N.K$ đỉnh đánh số từ $1$ đến $N.K$.
- Các cạnh của đồ thị được mô tả bằng một ma trận kích thước $N.K\times N.K$ là $X=(x_(i,j))$ được xây dựng bằng cách sao chép $K^2$ lần mà trận $A$ lên $K$ hàng và $K$ cột (xem giải thích ví dụ $1$ để hiểu). Nếu $x_(i,j)=1$ tức là có cạnh nối trực tiếp từ $i\to j$. Ngược lại không có cạnh.

Chúng ta cần trả lời $Q$ truy vấn. Mỗi truy vấn gồm một cặp số nguyên $s,t$ yêu cầu tính độ dài đường đi ngắn nhất (số cạnh) từ đỉnh $s$ đến đỉnh $t$. Nếu không tồn tại đường đi thì trả lời $-1$.

## Input

- Dòng đầu chứa 2 số nguyên $N$ và $K$.
- $N$ dòng tiếp theo, dòng thứ $i$ chứa $N$ số nguyên $a_{i,j}$.
- Dòng tiếp theo chứa số nguyên $Q$.
- $Q$ dòng tiếp theo, dòng thứ $i$ chứa 2 số nguyên $s_i$ và $t_i$.

## Output

- $Q$ dòng, dòng thứ $i$ chứa một số nguyên là độ dài đường đi ngắn nhất từ $s_i$ đến $t_i$. Nếu không tồn tại đường đi thì in ra $-1$.

## Constraints

- $1\le N\le 100$
- $1\le K\le 10^9$
- $1\le Q\le 100$
- $0\le a_{i,j}\le 1$
- $1\le s_i\neq t_i\le N.K$

## Example

| Input                                                           | Output                 | Explain                                                                                     |
| --------------------------------------------------------------- | ---------------------- | ------------------------------------------------------------------------------------------- |
| 3 2<br>1 1 1<br>1 1 0<br>0 1 0<br>4<br>1 2<br>1 4<br>1 6<br>6 3 | 1 <br> 1 <br> 1 <br> 3 | 1 1 1 1 1 1 <br>1 1 0 1 1 0 <br>0 1 0 0 1 0 <br>1 1 1 1 1 1 <br>1 1 0 1 1 0 <br>0 1 0 0 1 0 |