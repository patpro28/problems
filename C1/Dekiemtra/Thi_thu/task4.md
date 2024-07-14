# Dãy đá cân bằng

<!-- https://c.tmathcoding.vn/problem/to3 -->

Có $N$ đống đá đánh số từ 1 đến $N$ xếp từ trái sang phải, đống đá thứ $i$ có $a_i$ hòn đá.

Ta lần lượt xét các đống đá từ trái sang phải, bắt đầu từ đống đá thứ 3 và kết thúc ở đống đá thứ $N$. Khi xét đến đống đá thứ $i$ ta có thể thực hiện thao tác sau:

- Chọn ra một số nguyên $d$ $(0 \le 3 \times d \le a_i$), sau đó chuyển $d$ hòn đá từ đống thứ $i$ sang đống thứ $i - 1$ và chuyển $2\times d$ hòn đá từ đống thứ $i$ sang đống thứ $i - 2$.

Sau khi thực hiện xét hết các đống đá, gọi $M$ là số lượng hòn đá của đống ít nhất.

## Yêu cầu

- Hãy tìm giá trị lớn nhất có thể có của $M$.

## Input:
- Dòng đầu tiên gồm số nguyên dương $N$ (1 ≤ $N$ ≤ $2 \times 10^5$).
- Dòng thứ hai gồm $N$ số nguyên dương $a_1, a_2, ..., a_N$ (1 ≤ $a_i$ ≤ $10^9$).

## Output:
- In ra giá trị lớn nhất có thể có của $M$.

## Ví dụ:

| Sample Input        | Sample Output    |
|---------------------|------------------|
| 4 1 2 10 100        | 7                |
| 5 1 1 1 1 8         | 1                |

**Giải thích test 1**

- Tại đống đá thứ ba chọn $d = 3$, ta thực hiện chuyển 3 hòn đá sang đống thứ hai và 6 hòn đá sang đống thứ nhất. Số lượng đá ở các đống là $[7, 5, 1, 100]$.
- Tại đống đá thứ tư chọn $d = 6$, ta thực hiện chuyển 6 hòn đá sang đống thứ ba và 12 hòn đá sang đống thứ hai. Số lượng đá ở các đống là $[7, 17, 7, 82]$.
- Giá trị $M = 7$ và đây là giá trị lớn nhất có thể.
