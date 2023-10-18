Có $n$ bông hoa mọc liên tiếp bên đường thành một hàng. Bông hoa thứ $i$ có chiều cao $h_i$ và độ đẹp $a_i$. Tất cả $h_i$ là phân biệt.

Taro muốn cắt đi vài bông hoa sao cho các bông hoa còn lại có chiều cao tăng dần từ trái qua phải.

Tìm giá trị lớn nhất của tổng độ đẹp của các bông hoa còn lại.

## Input

- Dòng đầu tiên chứa một số nguyên dương $N$.
- Dòng thứ hai chứa $N$ số nguyên $h_1, h_2, \dots, h_N$.
- Dòng thứ ba chứa $N$ số nguyên $a_1, a_2, \dots, a_N$.

## Output

- Một số nguyên duy nhất là giá trị lớn nhất của tổng độ đẹp của các bông hoa còn lại.

## Constraints

- $1 \le N \le 2\times 10^5$.
- $1 \le h_i \le N$.
- $1 \le a_i \le 10^9$.

## Example 

| Input                                       | Output |
| ------------------------------------------- | ------ |
| 4<br>3 1 4 2<br>10 20 30 40                 | 60     |
| 9<br>4 2 5 8 3 6 1 7 9<br>6 8 8 4 6 3 5 7 5 | 31     |

