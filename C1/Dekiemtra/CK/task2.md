# Bài 2: Thay thế chuỗi (5 điểm)

Cho bạn một chuỗi $S$ có độ dài $N$ gồm các chữ cái tiếng Anh in thường.

Bạn sẽ thực hiện lần lượt $Q$ phép thay thế trên chuỗi $S$. Phép thay thế thứ $i$ $(1 \leq i \leq Q)$ được biểu diễn bởi một cặp ký tự $(c_i, d_i)$, tương ứng với các thao tác sau:

- Thay thế tất cả các ký tự $c_i$ trong $S$ bằng ký tự $d_i$.

In ra chuỗi $S$ sau khi tất cả các phép thay thế được thực hiện xong.

## Đầu vào

- Dòng đầu tiên chứa một số nguyên $N$ $(1 \leq N \leq 2 \times 10^5)$ — độ dài của chuỗi $S$.
- Dòng thứ hai chứa chuỗi $S$ có độ dài $N$.
- Dòng thứ ba chứa một số nguyên $Q$ $(1 \leq Q \leq 2 \times 10^5)$ — số lượng phép thay thế.
- $Q$ dòng tiếp theo, mỗi dòng chứa hai ký tự $c_i$ và $d_i$ $(1 \leq i \leq Q)$ — các ký tự cần thay thế. Các ký tự này đều là chữ cái tiếng Anh in thường.

## Đầu ra

In ra chuỗi $S$ sau khi thực hiện tất cả các phép thay thế.

## Ví dụ

| Input                                         | Output  |
| --------------------------------------------- | ------- |
| 7<br>atcoder<br>4<br>r a<br>t e<br>d v<br>a r | recover |

## Giới hạn

- Có $70\%$ số test có $N, Q \leq 10^3$.