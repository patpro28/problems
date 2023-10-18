<!-- https://atcoder.jp/contests/dp/tasks/dp_c -->

Kì nghỉ hè của bạn bắt đầu từ hôm nay. Bạn quyết định sẽ đi du lịch trong $N$ ngày tiếp theo. Trong ngày thứ $i$, bạn sẽ chọn một trong các hoạt động sau để thực hiện:

- `A`: Bơi ở bãi biển. Việc này tạo ra $a_i$ đơn vị hạnh phúc.
- `B`: Chơi bóng chuyền. Việc này tạo ra $b_i$ đơn vị hạnh phúc.
- `C`: Làm bài tập về nhà. Việc này tạo ra $c_i$ đơn vị hạnh phúc.

Để tránh buồn chán, bạn không được phép thực hiện cùng một hoạt động trong hai ngày liên tiếp.

Tìm cách thực hiện các hoạt động sao cho tổng số đơn vị hạnh phúc là lớn nhất.

## Input

- Dòng đầu tiên chứa số nguyên $N$.
- $N$ dòng tiếp theo, dòng thứ $i$ chứa ba số nguyên $a_i, b_i, c_i$.

## Output

- Một số nguyên duy nhất là tổng số đơn vị hạnh phúc lớn nhất.

## Constraints

- $1 \le N \le 10^5$
- $1 \le a_i, b_i, c_i \le 10^4$

## Example

| Input                                                                   | Output |
| ----------------------------------------------------------------------- | ------ |
| 3<br/>10 40 70<br/>20 50 80<br/>30 60 90                                | 210    |
| 1<br/>100 10 1                                                          | 100    |
| 7<br/>6 7 8<br/>8 8 3<br/>2 5 2<br/>7 8 6<br/>4 6 8<br/>2 3 4<br/>7 5 1 | 46     |