<!-- https://atcoder.jp/contests/practice2/tasks/practice2_a -->
<!-- Disjoint Set Union -->

Cho một đồ thị vô hướng có $N$ đỉnh đánh số từ $0$ đến $N-1$ và $0$ cạnh. Xử lý lần lượt các truy vấn sau:

- `0 u v` thêm một cạnh nối giữa đỉnh $u$ và $v$ vào đồ thị.
- `1 u v` in ra `1` nếu $u$ và $v$ nằm trên cùng một thành phần liên thông, ngược lại in ra `0`.

## Input

- Dòng đầu tiên chứa 2 số nguyên $N, Q$.
- $Q$ dòng tiếp theo, mỗi dòng chứa một truy vấn theo định dạng trên.

## Output

- Với mỗi truy vấn loại `1`, in ra `1` hoặc `0` trên một dòng.

## Constraints

- $1 \leq N, Q \leq 2 \times 10^5$
- $0 \leq u, v < N$

## Sample Input

    4 7
    1 0 1
    0 0 1
    0 2 3
    1 0 1
    1 1 2
    0 0 2
    1 1 3

## Sample Output

    0
    1
    0
    1
