<!-- https://codeforces.com/contest/628/problem/D -->
<!-- Difficult: 1 -->

# Task 2

Một số nguyên được gọi là `d-magic` nếu chữ số $d$ xuất hiện tại các vị trí chẵn và không xuất hiện tại vị trí lẻ trong biểu diễn thập phân của số đấy.

Ví du: $1727374, 17, 1$ là `7-magic` nhưng $77,7,123,34,71$ không phải `7-magic`. Tuy nhiên $7$ là `0-magic`, $123$ là `2-magic`, $34$ là `4-magic` và $71$ là `1-magic`.

Đếm số lượng số `d-magic` trong đoạn $[a,b]$ là bội của $m$. Bởi vì kết quả có thể rất lớn, bạn chỉ cần in ra giá trị đó module $10^9+7$.

## Input

- Dòng đầu chứa hai số nguyên dương $m,d$.
- Dòng hai chứa một số nguyên dương $a$ (không có số $0$ vô nghĩa đứng ở đầu).
- Dòng ba chứa một số nguyên dương $b$ (không có số $0$ vô nghĩa đứng ở đầu).

## Output

- In ra một số nguyên là số lượng số `d-magic` trong đoạn $[a,b]$ là bội của $m$ module cho $10^9+7$.

## Constraints

- $1\le m\le 1000$.
- $0\le d\le 9$.
- $1\le a\le b\le 10^{2000}$

## Example

|Input|Output|Explain|
|-|-|-|
|2 6<br>10<br>99|8|16, 26, 36, 46, 56, 76, 86, 96|
|2 0<br>1<br>9|4|2, 4, 6, 8|
|19 7<br>1000<br>9999|6|1767, 2717, 5757, 6707, 8797, 9747|
