
<!-- Câu 4. (4 điểm) Mật độ xuất hiện cao -->
Trò chơi chọn bóng mà nhóm của Tuấn thiết kế được bạn bè và giáo viên trong trưởng đánh giá rất cao. Sau thành công này, Tuân cùng nhóm bạn tập trung học tập để thi vào lớp chuyên tin của một trường chuyện danh giá trong tỉnh. Những bài tập mà Tuấn làm đều yêu cầu kỹ năng thiết kế thuật toán chuyên nghiệp. Một trong các bài tập mà bạn ấy đang xây dựng thuật toán có nội dung như sau:

Cho chuỗi kí tự $S$ chỉ gồm các kí tự chữ cái latinh thường từ `'a', ... 'z'`. Một chuỗi con $X$ (gồm các kí tự ở vị trí liên tiếp) của $S$ được gọi là một chuỗi có **mật độ xuất hiện cao** nếu trong chuỗi $X$ có một kí tự mà số lần xuất hiện của kí tự đó **nhiều hơn** số các kí tự còn lại trong chuỗi $X$.

Ví dụ: chuỗi $S =$ `abbbabced`, chuỗi con $X =$ `abbbabe` là một chuỗi có mật độ xuất hiện cao. vì có kí tự `b` xuất hiện $4$ lần, số các kí tự còn lại là $3$. Nếu $X =$ `abbbabce`, ki tự xuất hiện nhiều lần nhất $4$ lần (ki tự `b`) và số kí tự còn lại là $4$. Do vậy chuỗi $X =$ `abbbabce` không phải là một chuỗi có mật độ xuất hiện cao.

## Yêu cầu

Tìm một chuỗi con $X$ (gồm các kí tự ở vị trí liên tiếp) của $S$ là một chuỗi có mật độ xuất hiện cao và độ dài lớn nhất.

Tuấn cũng đã có thuật toán của mình, còn bạn thì sao? Hãy lập trình giải bài toán trên để đối chiếu kết quả nhé.

## Dữ liệu

- Một chuỗi kí tự 5 chỉ gồm các kí tự chữ cái latinh thường và có độ dài không lớn hơn $2 \le 10^5$.

## Kết quả

Một số nguyên duy nhất là độ dài của chuỗi X tìm được.

## Ví dụ

| Input     | Output |
| --------- | ------ |
| abbbabced | 7      |
| ababab    | 5      |
| abc       | 1      |