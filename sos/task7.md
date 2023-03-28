Một cuộc chiến tranh đã diễn ra giữa hai đất nước của An và Bình. Cường là đồng minh của An, anh ấy đã bị Bình bắt làm tù binh, vì vậy, An cần tổ chức một nhóm quân đội để giải cứu Cường.

Để thực hiện nhiệm vụ này, An đã thu thập được một bảng thống kê kĩ năng của các binh lính của anh. An cân chọn một tập con không rỗng của các binh lính từ tập các binh lính của anh (đánh số từ $1$ đên $N$). Mỗi binh lính sẽ có một tập con của $M$ kĩ năng khác nhau (đánh số từ $1$ đến $M$). Kĩ năng của một tập quân đội bằng hợp của kỹ năng của tất cả binh lính trong tập đấy. Để giải cứu thành công, An muốn biết có bao nhiêu cách chọn một tập quân đội thỏa mãn một yêu cầu về kĩ năng mà An cần. Kết quả có thể rất lớn, in ra module $10^9+7$.

Chú ý: Tập kĩ năng của quân đội phải chính xác số lượng tập kĩ năng của An cần, không thừa, không thiếu.

## Input

- Dòng đầu chứa hai số nguyên dương $N, M$.
- $N$ dòng tiếp theo, mỗi dòng chứa một xâu nhị phân độ dài $M$ mô tả kĩ năng của từng binh lính.
- Dòng cuối của một xâu nhị phân độ dài $M$ cho biết tập kĩ năng mà An cần.

## Output

- In ra một số nguyên là kết quả bài toán.

## Constraints

- $1\le N\le 10^5$.
- $1\le N\le 20$

## Example

|Input|Output|
|-|-|
|4 2<br>00<br>10<br>01<br>11<br>11|10|

## Explaination

- Các cách chọn là: $(1,2,3,4),(1,2,4),(1,3,4),(2,3,4),(1,4),(2,4),(3,4),(4),(1,2,3),(2,3)$ 