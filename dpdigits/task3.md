# Task 3

An yêu các số tự nhiên, tuy nhiên không phải tất cả chúng. Vì một số lý do cá nhân, anh ấy cho rằng các con số $a_0,a_1,...,a_9$ là các con số không may mắn. Với một số tự nhiên $x$, nếu có một chữ số $i$ xuất hiện chính xác $a_i$ lần (không tính các số $0$ vô nghĩa), thì An sẽ không thích $x$. Ngược lại $An$ sẽ thích $x$.

An muốn đếm số lượng số tự nhiên trong đoạn $[L, R]$ mà An thích chúng.

## Input

- Dòng đầu chứa một số nguyên dương $T$ là số bộ test.
- Mỗi bộ test sẽ có định dạng như sau:
  - Dòng đầu chứa 2 số nguyên dương $L, R$.
  - Dòng 2 chứa chính xác $10$ số nguyên $a_i$.

## Output

- Với mỗi test, in ra kết quả tương ứng tính được.

## Constraints

- $1\le T\le 100$
- $1\le L\le R\le 10^{18}$
- $0\le a_i\le 18$

## Example

|Input|Output|
|-|-|
|2<br>21 28<br>5 4 3 2 1 1 2 3 4 5<br>233 23333<br>2 3 3 3 3 2 3 3 3 3|6<br>19627|
