# Bài 1: Cuộc Thi Đấu Kỳ Phùng (6 điểm)

Có $N$ đấu thủ được đánh số từ $1$ đến $N$, đã tham gia nhiều trận đấu đối kháng không có kết quả hòa. Ban đầu, mỗi người đều có $0$ điểm. Trong mỗi trận đấu, người thắng sẽ được cộng thêm $1$ điểm và người thua sẽ bị trừ đi $1$ điểm (điểm số có thể trở thành âm). Hãy xác định điểm số cuối cùng của đấu thủ số $N$ nếu điểm số cuối cùng của đấu thủ $i$ ($1 \leq i \leq N-1$) là $A_i$. 

Có thể chứng minh rằng điểm số cuối cùng của đấu thủ số $N$ được xác định duy nhất không phụ thuộc vào trình tự của các trận đấu.

## Yêu cầu

Xác định điểm số cuối cùng của đấu thủ số $N$.

## Đầu vào

- Dòng đầu tiên chứa số nguyên $N$ $(2 \leq N \leq 100)$ - số đấu thủ.
- $N-1$ dòng tiếp theo, mỗi dòng chứa một số nguyên $A_i$ $(-100 \leq A_i \leq 100)$ - điểm số cuối cùng của đấu thủ $i$ ($1 \leq i \leq N-1$).

## Đầu ra

- Gồm một dòng chứa một số nguyên là điểm số cuối cùng của đấu thủ số $N$.

## Ví dụ

| Input       | Output |
| ----------- | ------ |
| 4<br>1 -2 1 | 2      |