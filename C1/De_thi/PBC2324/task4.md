Tuấn được công ty giao cho nhiệm vụ theo dõi giá trị cổ phiếu của công ty mình đang làm việc. Thời gian theo dõi giá trị cổ phiếu trong n ngày. Ngày thứ $i$ có giá trị cổ phiếu là $a_i$ ($a_i \leq 10^5$).

Ngày thứ $i$ được gọi là tăng trưởng nếu có giá trị cổ phiếu lớn hơn ngày thứ $j$ ở trước đó. Tức là tồn tại chỉ số $j$ sao cho $j < i$ và $a_j < a_i$. Biết rằng ngày thứ j ở trước ngày thứ $i$, gọi là ngày xa nhất ở phía trước và có giá trị cổ phiếu thấp hơn ngày thứ $i$. Độ tăng trưởng của ngày thứ $i$ được tính là khoảng cách giữa ngày đó và ngày thứ $j$ (có tính ngày thứ $j$).

### Yêu cầu:

Tính độ tăng trưởng của mỗi ngày trong các ngày Tuấn đang theo dõi.

### Dữ liệu vào:

Từ tệp văn bản `COPHIEU.INP` gồm:

- Dòng thứ nhất ghi số nguyên dương n.
- Dòng thứ hai ghi dãy số nguyên dương $a_1, a_2, ..., a_n$.

### Kết quả:

Ghi ra tệp văn bản `COPHIEU.OUT` một dòng gồm n giá trị là độ tăng trưởng của các ngày theo dõi tương ứng.

Các số trên cùng một dòng được ghi cách nhau bởi một dấu cách.

### Ví dụ:

| COPHIEU.INP           | COPHIEU.OUT   |
| --------------------- | ------------- |
| 6<br>10 8 5 3 9 4 5   | 0 0 0 0 3 5   |
| 7<br>16 4 6 3 2 18 15 | 0 0 1 0 0 5 5 |

### Giới hạn:

- 30% số test ứng với $0 < n \leq 5 \times 10^5$.
- 70% số test ứng với $5 \times 10^5 < n \leq 5 \times 10^6$.