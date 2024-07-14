Cho một bảng kích thước $M\times N$, được chia thành lưới ô vuông đơn vị $M$ dòng $N$ cột , 

Trên các ô của bảng ghi số  0 hoặc 1. Các dòng của bảng được đánh số  từ $1$ đến $M$ theo thứ tự từ trên xuống dưới và các cột của bảng được đánh số  từ $1$ đến $N$ theo thứ tự từ trái qua phải.

## Yêu cầu:

Hãy đếm số lượng hình chữ nhật gồm các ô của bảng thoả mãn các điều kiện sau:

- Hình chữ nhật đó chỉ gồm các số  $1$
- Cạnh hình chữ nhật song song với cạnh bảng

## Input

- Dòng $1$: Ghi hai số  $M,N$, 
- Dòng thứ $i$ trong $M$ dòng tiếp theo: Ghi $N$ số mà số thứ $j$ là số ghi trên ô $(i,j)$ của bảng

## Output

- Gồm $1$ dòng duy nhất ghi diện tích của hình chữ nhật tìm được

## Constraints

- $1\leq M,N\leq 1000$

## Sample Input
    11 13
    0 0 0 0 0 1 0 0 0 0 0 0 0
    0 0 0 0 1 1 1 0 0 0 0 0 0
    0 0 1 1 1 1 1 1 1 0 0 0 0
    0 0 1 1 1 1 1 1 1 0 0 0 0
    0 1 1 1 1 1 1 1 1 1 0 0 0
    1 1 1 1 1 1 1 1 1 1 1 0 0
    0 1 1 1 1 1 1 1 1 1 0 0 0   
    0 0 1 1 1 1 1 1 1 0 0 0 0   
    0 0 1 1 1 1 1 1 1 0 0 0 0
    0 0 0 0 1 1 1 0 0 0 0 1 1
    0 0 0 0 0 1 0 0 0 0 0 1 1

## Sample Output
    49