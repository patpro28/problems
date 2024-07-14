Đội tuyển bóng chuyền TMATH cần tuyển thêm một số thành viên mới, gồm $p$ thành viên tương ứng cho $p$ vị trí và $k$ thành viên trong đội cổ vũ. Đội nhận được $n$ hồ sơ ứng viên, mỗi hồ sơ bao gồm $2$ thông tin:

- $a_i$ là chỉ số sức mạnh được tăng thêm cho đội nếu ứng viên $i$ được chọn vào đội cổ vũ.
- Dãy $b_{i,j}$ là chỉ số sức mạnh được tăng thêm cho đội nếu ứng viên $i$ được chọn vào vị trí $j$.

Hãy giúp đội tuyển TMATH chọn ra $p$ thành viên cho vị trí và $k$ thành viên cho đội cổ vũ sao cho tổng sức mạnh tăng thêm là lớn nhất.

## Input

- Dòng đầu tiên chứa $3$ số nguyên $n, p, k$ ($1 \leq n \leq 10^5, 1 \leq p \leq 7, 1\le k, k + p\le n$).
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$ ($1 \leq a_i \leq 10^9$).
- $n$ dòng tiếp theo, dòng thứ $i$ chứa $p$ số nguyên $b_{i,1}, b_{i,2}, \dots, b_{i,p}$ ($1 \leq b_{i,j} \leq 10^9$).

## Output

- Một số nguyên duy nhất là tổng sức mạnh tăng thêm lớn nhất có thể đạt được.

## Example

| Input                                      | Output |
| ------------------------------------------ | ------ |
| 4 1 2<br>2 16 10 5<br>18<br>19<br>15<br>13 | 44     |