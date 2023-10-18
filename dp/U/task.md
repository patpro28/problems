Có $N$ con thỏ, đánh số từ $1$ đến $N$.

Với mỗi cặp thỏ $i,j$, độ tương thích giữa 2 con thỏ được đại diện bởi một số nguyên $a_{i,j}$. Với $a_{i,i}=0$ với mọi $i$, và $a_{i,j}=a_{j,i}$ với mọi $i,j$.

Thầy Toàn muốn Khải chia các con thỏ vào một số nhóm. Mỗi con thỏ nằm trong chính xác một nhóm. Sau khi chia xong, mới mỗi cặp thỏ $i,j$ thuộc cùng một nhóm, Khải sẽ nhận được điểm bằng $a_{i,j}$.

Tìm số điểm lớn nhất mà Khải có thể nhận được.

## Input

- Dòng đầu chứa một số nguyên dương $N$.
- $N$ dòng tiếp theo, dòng thứ $i$ chứa $N$ số nguyên $a_{i,1},a_{i,2},\ldots,a_{i,N}$.

## Output

- In ra số điểm lớn nhất mà Khải có thể nhận được.

## Constraints

- $1\le N\le 16$
- $|a_{i,j}|\le 10^9$
- $a_{i,i}=0$
- $a_{i,j}=a_{j,i}$

## Sample Input 1

    3
    0 10 20
    10 0 -100
    20 -100 0

## Sample Output 1

    20

## Sample Input 2

    16
    0 5 -4 -5 -8 -4 7 2 -4 0 7 0 2 -3 7 7
    5 0 8 -9 3 5 2 -7 2 -7 0 -1 -4 1 -1 9
    -4 8 0 -9 8 9 3 1 4 9 6 6 -6 1 8 9
    -5 -9 -9 0 -7 6 4 -1 9 -3 -5 0 1 2 -4 1
    -8 3 8 -7 0 -5 -9 9 1 -9 -6 -3 -8 3 4 3
    -4 5 9 6 -5 0 -6 1 -2 2 0 -5 -2 3 1 2
    7 2 3 4 -9 -6 0 -2 -2 -9 -3 9 -2 9 2 -5
    2 -7 1 -1 9 1 -2 0 -6 0 -6 6 4 -1 -7 8
    -4 2 4 9 1 -2 -2 -6 0 8 -6 -2 -4 8 7 7
    0 -7 9 -3 -9 2 -9 0 8 0 0 1 -3 3 -6 -6
    7 0 6 -5 -6 0 -3 -6 -6 0 0 5 7 -1 -5 3
    0 -1 6 0 -3 -5 9 6 -2 1 5 0 -2 7 -8 0
    2 -4 -6 1 -8 -2 -2 4 -4 -3 7 -2 0 -9 7 1
    -3 1 1 2 3 3 9 -1 8 3 -1 7 -9 0 -6 -8
    7 -1 8 -4 4 1 2 -7 7 -6 -5 -8 7 -6 0 -9
    7 9 9 1 3 2 -5 8 7 -6 3 0 1 -8 -9 0

## Sample Output 2

    132