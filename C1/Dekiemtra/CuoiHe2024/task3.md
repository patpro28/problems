## Bài 3: Chèn chữ số

Đức sau khi thắng giải FIFA mở rộng đã được ban tổ chức trao giải. Cậu được phát một số nguyên dương $A$ có $n$ chữ số và một chữ số $c$. Ban tổ chức yêu cầu cậu chèn chữ số $c$ này vào một vị trí bất kỳ trong $A$ (kể cả đầu và cuối) và sẽ lấy số mới được tạo làm phần thưởng cho cậu. Đức rất muốn đạt được phần thưởng cao nhất nhưng lại không biết chèn chữ số $c$ vào đâu. Là một người bạn tốt của Đức, hãy giúp cậu ấy tìm số lớn nhất được tạo ra.

### Dữ liệu

- Một dòng duy nhất chứa lần lượt số nguyên dương $A$ và chữ số $c$ ( $0 < n \leq 10^5$; $0 \leq c \leq 9$).

### Kết quả

- Một số nguyên dương duy nhất là kết quả bài toán.

### Tính điểm

| Thứ tự | Tỉ lệ | Ràng buộc    |
| ------ | ----- | ------------ |
| 1      | 30%   | $n \leq 5$   |
| 2      | 40%   | $n \leq 16$  |
| 3      | 30%   | $n \leq 10^5 |

### Ví dụ

| Input                 | Output               |
| --------------------- | -------------------- |
| 7058959 0             | 70589590             |
| 123 9                 | 9123                 |
| 9876543210123456789 4 | 98765443210123456789 |

### Giải thích

- Trong ví dụ 1, các số có thể được tạo ra là: 70589590, 70589509, 70589059, 70580959, 70508959, 70058959. Số lớn nhất là 70589590.
- Trong ví dụ 2, các số có thể được tạo ra là: 9123, 1923, 1293, 1239. Số lớn nhất là 9123.
