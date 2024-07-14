Cho một bảng gồm $N$ hàng và $M$ cột. Ô ở hàng $i$, cột $j$ được ký hiệu là $(i, j)$. Một số ô bị cấm, các ô còn lại để trống. Trạng thái của bảng được đại diện bởi $N$ xâu $S_1,S_2,...,S_N$. Nếu $S_{i,j}=\#$ thì ô $(i,j)$ bị cấm, ngược lại $S_{i,j}=.$ thì ô $(i,j)$ để trống.

Bạn cần đặt các viên gạch $1\times 2$ lên bảng. Các viên gạch có thể nằm ngang hoặc dọc nhưng phải phủ đúng 2 ô trống trên bảng. Các viên gạch không được chồng lên nhau hoặc chồng lên ô bị cấm, đồng thời viên gạch cũng không được thừa ra khỏi bảng.

Tính toán số viên gạch tối đa bạn có thể đặt lên bảng và đưa ra một cách đặt để đạt được số viên gạch đó.

## Input

- Dòng đầu chứa 2 số nguyên $N$ và $M$.
- $N$ dòng tiếp theo, mỗi dòng chứa một xâu $S_i$ độ dài $M$.

## Output

- Dòng đầu chứa số nguyên $K$ là số viên gạch tối đa bạn có thể đặt lên bảng.
- $N$ dòng tiếp theo, mỗi dòng chứa một xâu $T_i$ độ dài $M$ biểu diễn cách đặt viên gạch lên bảng. 
    - $T_i$ được khởi tạo từ $S_i$.
    - Với mỗi ô $(i,j)$, nếu có một viên gạch đặt dọc tại ô $(i,j)$ và $(i+1,j)$, thì $T_{i,j}=$ `v` và $T_{i+1,j}=$ `^`.
    - Với mỗi ô $(i,j)$, nếu có một viên gạch đặt ngang tại ô $(i,j)$ và $(i,j+1)$, thì $T_{i,j}=$ `>` và $T_{i,j+1}=$ `<`.

## Constraints

- $1\le N,M\le 100$

## Sample Input

    3 3
    #..
    ..#
    ...

## Sample Output

    3
    #><
    vv#
    ^^.
