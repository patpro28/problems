Thành phố $A$ có $N$ nam và $N$ nữ đang độc thân đánh số từ $1,2,\ldots,N$

Với mỗi cặp $i,j$ $(1\le i,j\le N)$, độ phù hợp của người nam thứ $i$ và người nữ thứ $j$ được mô tả bằng một chỉ số $a_{i,j}$. Nếu $a_{i,j}=1$, người nam thứ $i$ và người nữ $j$ hợp nhau, ngược lại nếu $a_{i,j}=0$ họ không hợp nhau.

Thị trưởng muốn ghép được $N$ cặp đôi, mỗi cặp đôi nam nữ đều phải hợp nhau. Mỗi người nam và nữ chỉ được ở trong đúng một cặp.

Tìm số cách để thị trưởng ghép được $N$ cặp đôi, module $10^9+7$.

## Input

- Dòng đầu chứa 1 số nguyên dương $N$.
- $n$ dòng tiếp theo, mỗi dòng chứa $N$ số nguyên mô tả bảng $a$.

## Output

- Một dòng là số cách đếm được.

## Constraints

- $1\le N\le 21$
- $0\le a_{i,j}\le 1$

## Sample Input 1

    3
    0 1 1
    1 0 1
    1 1 1

## Sample Output 1

    3

## Sample Input 2

    4
    0 1 0 0
    0 0 0 1
    1 0 0 0
    0 0 1 0

## Sample Output 2

    1

## Sample Input 3

    21
    0 0 0 0 0 0 0 1 1 0 1 1 1 1 0 0 0 1 0 0 1
    1 1 1 0 0 1 0 0 0 1 0 0 0 0 1 1 1 0 1 1 0
    0 0 1 1 1 1 0 1 1 0 0 1 0 0 1 1 0 0 0 1 1
    0 1 1 0 1 1 0 1 0 1 0 0 1 0 0 0 0 0 1 1 0
    1 1 0 0 1 0 1 0 0 1 1 1 1 0 0 0 0 0 0 0 0
    0 1 1 0 1 1 1 0 1 1 1 0 0 0 1 1 1 1 0 0 1
    0 1 0 0 0 1 0 1 0 0 0 1 1 1 0 0 1 1 0 1 0
    0 0 0 0 1 1 0 0 1 1 0 0 0 0 0 1 1 1 1 1 1
    0 0 1 0 0 1 0 0 1 0 1 1 0 0 1 0 1 0 1 1 1
    0 0 0 0 1 1 0 0 1 1 1 0 0 0 0 1 1 0 0 0 1
    0 1 1 0 1 1 0 0 1 1 0 0 0 1 1 1 1 0 1 1 0
    0 0 1 0 0 1 1 1 1 0 1 1 0 1 1 1 0 0 0 0 1
    0 1 1 0 0 1 1 1 1 0 0 0 1 0 1 1 0 1 0 1 1
    1 1 1 1 1 0 0 0 0 1 0 0 1 1 0 1 1 1 0 0 1
    0 0 0 1 1 0 1 1 1 1 0 0 0 0 0 0 1 1 1 1 1
    1 0 1 1 0 1 0 1 0 0 1 0 0 1 1 0 1 0 1 1 0
    0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 1 1 0 0 1
    0 0 0 1 0 0 1 1 0 1 0 1 0 1 1 0 0 1 1 0 1
    0 0 0 0 1 1 1 0 1 0 1 1 1 0 1 1 0 0 1 1 0
    1 1 0 1 1 0 0 1 1 0 1 1 0 1 1 1 1 1 0 1 0
    1 0 0 1 1 0 1 1 1 1 1 0 1 0 1 1 0 0 0 0 0

## Sample Output 3

    102515160
