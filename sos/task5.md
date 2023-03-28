An có $N$ hộp quà đồ chơi bị lãng quên trên gác xếp của anh ấy. Có tất cả $M$ loại đồ chơi đánh số từ $1$ đến $M$, mỗi loại đồ chơi có thể xuất hiện nhiều lần trong các hộp đồ chơi.

An muốn lấy các hộp đồ chơi ra để làm phần thưởng cho một trò chơi của anh ấy. Để đảm bảo tính đa dạng, anh ấy muốn chọn một số hộp đô chơi mà sao cho mỗi loại đồ chơi đều xuất hiện ít nhất $1$ lần trong một hộp nào đó.

Tính số cách chọn mà An có thể chọn.

## Input

- Dòng đầu chứa 2 số nguyên dương $N, M$.
- $N$ dòng tiếp theo, mỗi dòng bắt đầu bằng một số nguyên $K$ là số món đồ chơi trong hộp, theo sau là $K$ số nguyên phân biệt cho biết số hiệu của các loại đồ chơi có trong hộp.

## Output

- In ra một số nguyên là số cách tính được $\pmod{10^9+7}$

## Constraints

- $1\le N\le 10^6$.
- $1\le M\le 15$.

## Example

|Input|Output|
|-|-|
|3 3<br>3 1 2 3<br>3 1 2 3<br>3 1 2 3|7|
|3 3<br>1 1<br>1 2<br>1 3|1|
|4 5<br>2 2 3<br>2 1 2<br>4 1 2 3 5<br>4 1 2 4 5|6|
