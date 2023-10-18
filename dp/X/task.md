Cho $N$ khối đá được đánh số từ $1$ đến $N$. Khối đá thứ $i$ có khối lượng $w_i$, độ cứng $s_i$ và giá trị $v_i$.

Taro muốn xây một tòa tháp bằng cách chọn một số khối đá trong $N$ khối đá trên và xếp chúng theo phương thẳng đứng theo một thứ tự nào đó. Tòa tháp phải thỏa mãn yêu cầu sau:

- Với mỗi khối đá $i$ được đặt trên tòa tháp, tổng trọng lượng các khối đá nằm trên nó không được vượt quá độ cứng của nó.

Giá trị của tòa tháp bằng tổng giá trị các khối đá đã sử dụng, hãy tìm giá trị lớn nhất có thể đạt được.

## Input

- Dòng đầu chứa số nguyên dương $N$.
- $N$ dòng tiếp theo, dòng thứ $i$ chứa ba số nguyên $w_i, s_i, v_i$.

## Output

- Một số nguyên duy nhất là giá trị lớn nhất có thể đạt được.

## Constraints

- $1 \le N \le 10^3$.
- $1 \le w_i, s_i \le 10^4$.
- $1 \le v_i \le 10^9$

## Example

| Input                                                                     | Output |
| ------------------------------------------------------------------------- | ------ |
| 4<br>1 2 10<br>3 1 10<br>2 4 10<br>1 6 10                                 | 40     |
| 3<br>2 2 20<br>2 1 30<br>3 1 40                                           | 50     |
| 8<br>9 5 7<br>6 2 7<br>5 7 3<br>7 8 8<br>1 9 6<br>3 3 3<br>4 1 7<br>4 5 5 | 22     |

