Cho một đồ thị vô hướng liên thông gồm $n$ đỉnh và $m$ cạnh, không nhất thiết là đơn đồ thị và có thể có cạnh nối một đỉnh với chính nó.

Cạnh thứ $i$ nối hai đinh $A_i$ và $B_i$, và có một kí tự $C_i$ được gán cho cạnh đó.

Hãy tìm một đường đi từ đỉnh $1$ đến đỉnh $n$ (có thể đi lại một cạnh nhiều lần) sao cho khi viết lần lượt các kí tự trên các cạnh mà đường đi đi qua, ta được một xâu đối xứng có độ dài nhỏ nhất.

## Dữ liệu vào

- Dòng đầu tiên chứa hai số nguyên $n$ và $m$ $(2\le n\le 10^3, 1\le m\le 10^3)$.
- $m$ dòng tiếp theo, mỗi dòng chứa ba số nguyên $A_i$, $B_i$ và một kí tự $C_i$ $(1\le A_i,B_i\le n, C_i\in\text{‘a’..’z’})$ thể hiện một cạnh của đồ thị.
- Đồ thị được cho là liên thông.

## Dữ liệu ra

- In ra một số nguyên duy nhất là độ dài của xâu đối xứng ngắn nhất có thể tạo ra.
- Nếu không thể tạo ra xâu đối xứng nào, in ra $-1$.

## Sample Input 1

```
8 8
1 2 a
2 3 b
1 3 c
3 4 b
4 5 a
5 6 c
6 7 b
7 8 a
```

## Sample Output 1

```
10
```

Đường đi tìm được có chỉ số các cạnh theo thứ tự là $1,2,3,1,2,4,5,6,7,8$. Xâu được tạo thành là `abcabbacba` là xâu đối xứng ngắn nhất.

## Sample Input 2

```
4 5
1 1 a
1 2 a
2 3 a
3 4 b
4 4 a
```

## Sample Output 2

```
5
```

Thứ tự cạnh di chuyển là $2,3,4,5,5$. Xâu được tạo thành là `aabaa` là xâu đối xứng ngắn nhất.

## Sample Input 3

```
3 4
1 1 a
1 2 a
2 3 b
3 3 b
```

## Sample Output 3

```
-1
```