
<!-- Câu 3. (5 điểm) Trò chơi chọn bóng -->
Ngày thành lập Đoàn 26/3 sắp đến. Tuấn cùng nhóm bạn của mình được giao thiết kế một trò chơi trí tuệ dành cho các đoàn viên trong trường. Sau một thời gian tìm hiểu và nghiên cứu, nhóm của Tuấn đã xây dựng một trò chơi có nội dung như sau:

*Một rổ bóng có $n$ quả bóng. Các quả bóng được đánh số từ $1$ đến $n$. Quả bóng thứ $i$ có màu được mã hóa bởi một số nguyên dương $c_i (1\le c_i \le k)$, trong đó $k$ là số màu khác nhau trong $n$ quả bóng. Mỗi lần chơi, người chơi sẽ chọn hai quả bóng khác màu trong rổ bóng và đưa hai quả bóng này ra khỏi rổ. Người chơi sẽ dừng lại khi trong rổ không còn quả bóng nào hoặc không có hai quả bóng khác màu. Số bóng được lấy ra khỏi rổ là số điểm của người chơi.*

Tuấn cũng nhóm bạn muốn biết người chơi có thể đạt được điểm lớn nhất là bao nhiêu? Bạn hãy lập trình để tìm kết quả này nhé.

## Yêu cầu

Đưa ra số điểm lớn nhất mà người chơi có thể nhận được.

## Dữ liệu

- Dòng 1 ghi hai số nguyên $n$ và $k$ $(2 \le k \le n\le 2\times 10^5)$ tương ứng là số quả bóng trong rổ và số màu khác nhau của $n$ quả bóng. 
- Dòng 2 ghi $n$ số nguyên dương $c_1, c_2,..., c_n (1 \le c_i \le k)$ tương ứng là mã màu của $n$ quả bóng. 

## Kết quả 

- Một số nguyên duy nhất là số điểm lớn nhất mà người chơi có thể nhận được.

## Ví dụ

| Input              | Output |
| ------------------ | ------ |
| 6 2<br>1 2 2 1 1 1 | 4      |
| 4 3<br>3 3 1 2     | 4      |