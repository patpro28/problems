Cho đơn đồ thị có hướng $G$ gồm $N$ đỉnh được đánh số từ $1$ đến $N$.

Với mỗi cặp đỉnh $i,j$, bạn được cho một số nguyên $a_{i,j}$ đại diện cho biết có cạnh nối từ đỉnh $i$ đến đỉnh $j$ hay không. Nếu $a_{i,j}=1$ thì có cạnh nối, ngược lại thì không có cạnh nối.

Đếm số lượng đường đi độ dài $K$ trên đồ thị $G$, module $10^9+7$. Đường đi cho phép đi qua một cạnh nhiều lần.

## Input

- Dòng đầu chứa 2 số nguyên $N$ và $K$.
- $N$ dòng tiếp theo, mỗi dòng chứa $N$ số nguyên $a_{i,j}$.

## Output

- Một số nguyên duy nhất là số lượng đường đi độ dài $K$ trên đồ thị $G$, module $10^9+7$.

## Constraints

- $1 \le N \le 50$.
- $1 \le K \le 10^{18}$.
- $0 \le a_{i,j} \le 1$.
- $a_{i,i}=0$

## Sample Input 1

    4 2
    0 1 0 0
    0 0 1 1
    0 0 0 1
    1 0 0 0

## Sample Output 1

    6

## Sample Input 2

    10 1000000000000000000
    0 0 1 1 0 0 0 1 1 0
    0 0 0 0 0 1 1 1 0 0
    0 1 0 0 0 1 0 1 0 1
    1 1 1 0 1 1 0 1 1 0
    0 1 1 1 0 1 0 1 1 1
    0 0 0 1 0 0 1 0 1 0
    0 0 0 1 1 0 0 1 0 1
    1 0 0 0 1 0 1 0 0 0
    0 0 0 0 0 1 0 0 0 0
    1 0 1 1 1 0 1 1 1 0

## Sample Output 2

    957538352