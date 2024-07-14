# Bài 1: Tổng mũ

Cho ba số nguyên dương $a, n$ và $M$. Hãy tính $S = 1 + a + a^2...+a^n$ module cho $M$.

## Dữ liệu vào

- Một dòng ghi ba số nguyên dương $a, n, M$ $(1 \le a, n, M \le 10^9)$.

## Dữ liệu ra

- Ghi ra tổng $S$ sau khi chia lấy dư cho $M$.

## Sample Input
    2 9 10000

## Sample Output
    1023
  
## Giới hạn

- Có $90\%$ số test với $a < M$ và $M$ là số nguyên tố.

# Bài 2: Bộ 3 RGB

Cho xâu ký tự $S$ độ dài $N$ bao gồm các ký tự $R$, $G$ và $B$.
Tìm số lượng bộ ba $(i,j,k)$ $(1\leq i<j<k\leq N)$ thỏa mãn 2 điều kiện sau:

- $S_i\neq S_j$, $S_i\neq S_k$ và $S_j\neq S_k$.
- $j−i\neq k−j$.

## Input
- Dòng đầu chứa số nguyên $N$ $(1\leq N\leq 4000)$
- Dòng thứ 2 chứa xâu ký tự $S$

## Output
- In ra số lượng bộ ba thỏa mãn

## Sample Input
    4
    RRGB

## Sample Output 
    1

# Bài 3: Trò chơi trên dãy số

Ba bạn học sinh trong lúc nhàn rỗi nghĩ ra trò chơi sau đây. Mỗi bạn chọn trước một dãy số gồm $n$ số nguyên. Giả sử dãy số mà bạn thứ nhất chọn là $a_1, a_2, ..., a_n$, dãy số bạn thứ hai chọn là $b_1, b_2, ..., b_n$, và dãy số bạn thứ ba chọn là $c_1, c_2, ..., c_n$. Mỗi lượt chơi, bạn thứ nhất chọn một chỉ số $i$, bạn thứ hai chọn chỉ số $j$, bạn thứ ba chọn chỉ số $k$ thỏa mãn: $i < j < k$ và điểm cho lượt chơi đó bằng tích $a_i \times b_j \times c_k$.

Ví dụ: Với $n = 4$, dãy số bạn thứ nhất chọn $-3, 2, 3, 0$; dãy số bạn thứ hai chọn $1, 1, 1, 0$; còn dãy số bạn thứ ba chọn $9, 1, 0, -2$. Khi đó nếu bạn thứ nhất chọn $i = 1$, bạn thứ hai chọn $j = 2$, còn bạn thứ ba chọn $k = 4$ thì được $( -3 ) \times 1 \times ( -2 ) = 6$ điểm và đây là cách chọn để đạt điểm cao nhất trong số các cách chọn thỏa mãn.

## Yêu cầu

- Cho ba dãy số $a_1, a_2, ..., a_n$, $b_1, b_2, ..., b_n$ và $c_1, c_2, ..., c_n$. Hãy xác định điểm cao nhất trong số các cách chọn thỏa mãn.

## Dữ liệu vào

  - Dòng đầu tiên chứa số nguyên dương $n$;
  - Dòng thứ hai chứa dãy số nguyên $a_1, a_2, ..., a_n$ $(|a_i| \le 10^6, i = 1, 2, ..., n)$;
  - Dòng thứ ba chứa dãy số nguyên $b_1, b_2, ..., b_n$ $(|b_i| \le 10^6, i = 1, 2, ..., n)$;
  - Dòng thứ tư chứa dãy số nguyên $c_1, c_2, ..., c_n$ $(|c_i| \le 10^6, i = 1, 2, ..., n)$.

## Dữ liệu ra

- Ghi ra một số nguyên là điểm cao nhất trong số các cách chọn thỏa mãn.

## Ví dụ

    4
    -3 2 3 0
    1 1 1 0
    9 1 0 -2


    6

## Ràng buộc

- Có 40% số test trong với 40% số điểm của bài có $n \le 300$;
- Có 30% số test trong với 30% số điểm của bài có $n \le 3000$;
- Có 30% số test khác ứng với 30% số điểm của bài có $n \le 300000$.

# Bài 4: Bộ 3 chỉ số

Cho một dãy số nguyên dương $A = (A_1,A_2,\ldots,A_N)$ gồm $N$ phần tử.

Đếm số bộ 3 chỉ số $(i,j,k)$ thoả mãn tất cả điều kiện dưới đây:

- $1 \leq i,j,k \leq N$.
- $\frac{A_i}{A_j} = A_k$.

## Dữ liệu vào

- Dòng đầu tiên chứa số nguyên $N$ $(1 \leq N \leq 2\times 10^5)$.
- Dòng thứ hai chứa $N$ số nguyên $A_1,A_2,\ldots,A_N$ $(1 \leq A_i \leq 2\times 10^5)$.

## Dữ liệu ra

- In ra một số nguyên là số bộ 3 chỉ số $(i,j,k)$ thoả mãn điều kiện đã nêu.

| Input                      | Output |
| -------------------------- | ------ |
| 3<br>6 2 3                 | 2      |
| 10 <br>1 3 2 4 6 8 2 2 3 7 | 62     |

# Bài 5: Triple XOR

Cho $3$ đoạn $[A_1, B_1], [A_2, B_2], [A_3, B_3]$, hãy lấy $3$ số nguyên $x, y, z$ lần lượt thuộc 3 đoạn trên sao cho $x \oplus y \oplus z$ đạt giá trị lớn nhất, và $3$ số $u, v, w$ lần lượt thuộc 3 đoạn trên sao cho $u \oplus v \oplus w$ đạt giá trị nhỏ nhất.

## Input

- Dòng đầu chứa $2$ số nguyên $A_1, B_1$.
- Dòng thứ hai chứa $2$ số nguyên $A_2, B_2$.
- Dòng cuối cùng chứa $2$ số nguyên $A_3, B_3$.

## Output

- In ra giá trị nhỏ nhất và lớn nhất tìm được.

| Input                | Output  |
| -------------------- | ------- |
| 1 10<br>5 15<br>8 20 | 0<br>31 |

## Giới hạn

- Subtask 1 (20%): $A_2=B_2; A_3=B_3;$ $0\le A_i, B_i\le 10^9$.
- Subtask 2 (20%): $B_2-A_2\le 10^6; A_3=B_3;$ $0\le A_i, B_i\le 10^9$.
- Subtask 3 (30%): $A_3=B_3;$ $0\le A_i, B_i\le 10^9$.
- Subtask 4 (30%): $0\le A_i, B_i\le 10^{15}$.

# Bài 6: Sắp xếp lá bài

Chúng ta có $N$ lá bài đánh số từ $1,2,\ldots,N$. Lá bài thứ $i$ được viết một số $A_i$ bằng mực đỏ lên một mặt và một số $B_i$ bằng mực xanh lên mặt còn lại. Lúc đầu, tất cả các lá bài được xếp từ trái qua phải theo thứ tự $1$ đến $N$, với mặt mực đỏ là mặt ngửa.

Cần xác định xem chúng ta có thể tạo thành một dãy không giảm của các số trên mặt ngửa từ trái qua phải (tức là với mỗi lá bài thứ $i\ (1\le i<N)$ tính từ bên trái thì số ghi trên mặt ngửa của lá bải $i$ phải không lớn hơn số trên mặt ngửa của lá bài thứ $i+1$ tính từ bên trái) bằng cách lặp lại sử dụng thao tác dưới đây. Nếu câu trả lời là có thì tìm số bước nhỏ nhất để đạt được điều đó.

- Chọn một số nguyên $i\ (1\le i<N)$, hoán đổi vị trí lá bài thứ $i$ và $i+1$, sau đó lật lại 2 lá bài đấy.

## Input
- Dòng đấu chứa một số nguyên dương $N$ $(1\le N\le 18)$.
- Dòng 2 chứa $N$ số nguyên $A_i$ $(1\le A_i\le 50)$.
- Dòng 3 chứa $N$ số nguyên $B_i$ $(1\le B_i\le 50)$.

## Output
- Nếu không có cách thì in ra $-1$, ngược lại in ra số bước nhỏ nhất.

| Input                               | Output |
| ----------------------------------- | ------ |
| 3<br>3 4 3<br>3 2 3                 | 1      |
| 2<br>2 1<br>1 2                     | -1     |
| 5<br>4 46 6 38 43<br>33 15 18 27 37 | 3      |