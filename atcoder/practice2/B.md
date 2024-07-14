Cho một dãy số nguyên $A: (a_0, a_1, a_2, \dots, a_{n-1})$. Hãy xử lý lần lượt các truy vấn sau:

- `0 p x`: tăng $a_p$ lên $x$.
- `1 l r`: in ra tổng các số từ $a_l$ đến $a_{r-1}$.

## Input

- Dòng đầu tiên chứa 2 số nguyên $n, q$.
- Dòng thứ hai chứa $n$ số nguyên $a_0, a_1, a_2, \dots, a_{n-1}$.
- $q$ dòng tiếp theo, mỗi dòng chứa một truy vấn theo định dạng trên.

## Output

- Với mỗi truy vấn loại `1`, in ra tổng các số từ $a_l$ đến $a_{r-1}$ trên một dòng.

## Constraints

- $1 \leq n, q \leq 5 \times 10^5$.
- $0 \leq a_i, x \leq 10^9$.
- $0 \le p \le N-1$
- $0 \le l<r\le N$

## Sample Input

    5 5
    1 2 3 4 5
    1 0 5
    1 2 4
    0 3 10
    1 0 5
    1 0 3

## Sample Output

    15
    7
    25
    6
