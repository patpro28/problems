Bạn được cho một hoán vị $A = (A_1, \ldots, A_N)$ của dãy $(1, 2, \ldots, N)$. 

Hãy biến đổi $A$ thành $(1, 2, \ldots, N)$ bằng cách thực hiện phép hoán đổi sau từ $0$ đến $N-1$ lần:

- **Phép hoán đổi**: Chọn một cặp số nguyên $(i, j)$ sao cho $1 \leq i < j \leq N$. Hoán đổi các phần tử ở vị trí thứ $i$ và $j$ của $A$.

Có thể chứng minh rằng với các điều kiện đã cho, luôn luôn có thể biến đổi $A$ thành $(1, 2, \ldots, N)$.

## Yêu cầu

Xác định một cách biến đổi $A$ thành $(1, 2, \ldots, N)$.

## Đầu vào
- Dòng đầu tiên chứa số nguyên $N$ - độ dài của hoán vị.
- Dòng thứ hai chứa $N$ số nguyên $A_1, A_2, \ldots, A_N$ - hoán vị của dãy $(1, 2, \ldots, N)$.

## Đầu ra
- Gồm $K+1$ dòng, với $K$ là số lần phép hoán đổi cần thực hiện.
- Dòng đầu tiên chứa số nguyên $K$ - số lần phép hoán đổi cần thực hiện.
- $K$ dòng tiếp theo, mỗi dòng chứa hai số nguyên $i, j$ - cặp số nguyên $(i, j)$ mà bạn chọn để thực hiện phép hoán đổi.

## Giới hạn

- $2 \leq N \leq 2\times 10^5$.

## Ví dụ

| Input          | Output          |
| -------------- | --------------- |
| 5<br>3 4 1 2 5 | 2<br>1 3<br>2 4 |
