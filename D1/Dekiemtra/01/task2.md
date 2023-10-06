$N$ người đang đứng xếp hàng chờ mua vé vào buổi hòa nhạc. Mọi người đều phát chán khi phải chờ đợi, vì vậy họ nhìn quanh xem có ai quen hay không.

Hai người $A$ và $B$ đứng trong hàng có thể nhìn thấy nhau nếu:

- Người $A$ và người $B$ đang đứng cạnh nhau.
- Hoặc giữa người $A$ và người $B$, không có ai cao hơn hẳn một trong hai người.

Hãy đếm xem có bao nhiêu cặp có thể nhìn thấy nhau trong hàng.

## Input

- Dòng đầu tiên chứa số nguyên dương $N$, là số người đang đứng trong hàng.
- Mỗi dòng trong $N$ dòng tiếp theo chứa một số nguyên là chiều cao của một người tính bằng nanomet. (Tất cả mọi người đều thấp hơn $2^{31}$ nanomet).

## Output

- Một số nguyên duy nhất là kết quả cần tìm.

## Constraints

- $1\le N\le 5\cdot 10^5$

## Example

| Input                                              | Output |
| -------------------------------------------------- | ------ |
| 7 <br> 2 <br> 4 <br> 1 <br> 2 <br> 2 <br> 5 <br> 1 | 10     |

## Subtasks

- **Subtask 1 (40%)**: $N\le 500$
- **Subtask 2 (30%)**: $N\le 5000$

