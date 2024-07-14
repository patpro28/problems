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

# Đoàn xe tham quan

Trong đợt tổ chức đi tham quan danh lam thắng cảnh của thành phố Hồ Chí Minh, Ban tổ chức hội thi Tin học trẻ tổ chức cho $N$ đoàn (đánh số từ $1$ đến $N$) mỗi đoàn đi tham quan một địa điểm khác nhau. Đoàn thứ $i$ đi tham quan địa điểm cách Khách sạn Hoàng Đế $d_i$ km $(i=1,2,...,n)$. Hội thi có $M$ xe taxi đánh số từ $1$ đến $M$ $(M \ge N)$. Xe thứ j có mức tiêu thụ xăng là $v$ lít/km.

## Yêu cầu

- Hãy chọn $N$ xe để phục vụ việc đưa các đoàn đi tham quan sao cho tổng chi phí xăng cần sử dụng là ít nhất.

## Đầu vào 

- Dòng đầu tiên chứa hai số nguyên dương $N, M (1 \leq\ N, M \leq\ 30000)$
- Tiếp theo là $N$ dòng, dòng thứ $i$ ghi số nguyên $(1 \leq\ d_i \leq\ 30000)$
- Cuối cùng là $M$ dòng, dòng thứ $j$ ghi $v_j (1 \leq\ v_j \leq\ 30000)$

## Đầu ra

- Dòng đầu tiên ghi tổng lượng xăng cần dùng cho việc đưa các đoàn đi tham quan (không tính lượt về)


## Sample Input 
    3 4
    7
    5
    9
    17
    13
    15
    10


## Sample Output 
    256

# Một lần hoán đổi
<!-- abc349c -->

Bạn được cung cấp một chuỗi ký tự $S$ chỉ chứa các kí tự latinh in thường. Hãy tìm số lượng các chuỗi khác nhau có thể được tạo ra bằng cách thực hiện chính xác một lần thao tác sau đây:

- Cho $N$ là độ dài của $S$. Chọn một cặp số nguyên $(i, j)$ sao cho $1 \le i < j \le N$ và hoán đổi ký tự thứ $i$ và thứ $j$ của $S$.

## Input

- Một dòng duy nhất chứa chuỗi $S$ $(2\le |S|\le 10^6)$.

## Output

- In ra số lượng chuỗi có thể được tạo ra bằng cách thực hiện thao tác trong đề bài đúng một lần trên $S$.

## Ví dụ

| Input | Output |
|-------|--------|
| abc   | 3      |
| aaaaa | 1      |

## Rằng buộc

- $50\%$ số test có $|S| \le 100$.

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
