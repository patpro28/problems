# Độ chia hết

Cho một dãy số nguyên $A: A_1, A_2, A_3, \ldots, A_N$.

Gọi **Độ chia hết** của một số nguyên dương $k$ là số lượng các phần tử trong $A_1, A_2, A_3, \ldots, A_N$ chia hết cho $k$.

Trong các số nguyên lớn hơn hoặc bằng $2$, hãy tìm số nguyên có **Độ chia hết** lớn nhất. Nếu có nhiều số như vậy, bạn có thể in ra bất kỳ số nào trong số đó.

## Đầu vào

- Dòng đầu tiên chứa một số nguyên $N$ $(1 \le N \le 10^5)$ - số lượng phần tử trong dãy số.
- Dòng thứ hai chứa $N$ số nguyên $A_1, A_2, A_3, \ldots, A_N$ $(2 \le A_i \le 10^6)$ - dãy số nguyên.

## Đầu ra

- In ra một số nguyên có **Độ chia hết** lớn nhất trong các số nguyên lớn hơn hoặc bằng $2$. Nếu có nhiều số như vậy, bất kỳ số nào trong số đó đều được chấp nhận.

## Ví dụ

| Input             | Output |
| ----------------- | ------ |
| 3<br>3 12 7       | 3      |
| 5<br>8 9 18 90 72 | 9      |

## Ràng buộc

- Trong $90\%$ số test, $N \le 100; A_i \le 10^3$.