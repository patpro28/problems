Nông trang có rất nhiều ngọn đồi núi, để bảo vệ nông trang nông dân John muốn đặt người canh gác trên các ngọn đồi này.

Anh ta băn khoăn không biết sẽ cần bao nhiêu người canh gác nếu như anh ta muốn đặt $1$ người canh gác trên đỉnh của mỗi đồi. Anh ta có bản đồ của nông trang là một ma trận gồm $N$ hàng và $M$ cột. Mỗi phần tử của ma trận là độ cao so với mặt nước biển của ô đó. Hãy giúp anh ta xác định số lượng đỉnh đồi trên bản đồ.

Đỉnh đồi là một hoặc nhiều ô nằm kề nhau của ma trận có cùng độ cao được bao quanh bởi các ô có độ cao thấp hơn hoặc là các cạnh của ma trận. Hai ô được gọi là kề nhau nếu chúng có chung một cạnh.

## Input

- Dòng đầu tiên chứa hai số nguyên $N$ và $M$.
- $N$ dòng tiếp theo, mỗi dòng chứa $M$ số nguyên $h_{ij}$ là độ cao của ô $(i,j)$.

## Output

- Một số nguyên duy nhất là số lượng đỉnh đồi.

## Constraints

- $1\le N,M\le 700$
- $1\le h_{ij}\le 10^4$

## Sample Input

    8 7
    4 3 2 2 1 0 1
    3 3 3 2 1 0 1
    2 2 2 2 1 0 0
    2 1 1 1 1 0 0
    1 1 0 0 0 1 0
    0 0 0 1 1 1 0
    0 1 2 2 1 1 0
    0 1 1 1 2 1 0
  
## Sample Output

    3