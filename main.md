# Bai 1

Cho 2 điểm phân biệt có toạ độ nguyên $A(x_1,y_1)$ và $B(x_2,y_2)$. Tìm phương trình đường thẳng $(d): ax+by+c=0$ đi qua 2 điểm $A$ và $B$.

## Input

- Dòng đầu chứa 2 số nguyên $x_1,y_1$.
- Dòng 2 chứa 2 số nguyên $x_2,y_2$

## Output

- In ra 3 số nguyên $a,b,c$ trên một dòng, nhiều có nhiều bộ 3 thoả mãn, in ra một bộ bất kì.

## Constraints

- $|x_i|,|y_i|\le 10^9$

## Example

|Input|Output|
|-|-|

---

## Bài 2

Cho 2 đoạn thẳng, đoạn thẳng đầu tiên có 2 đầu mút lần lượt là $(x_1,y_1)$ và $(x_2,y_2)$, và đoạn thẳng thứ $2$ có toạ độ 2 đầu mút lần lượt là $(x_3,y_3)$ và $(x_4,y_4)$.

Nhiệm vụ của bạn là kiểm tra 2 đoạn thẳng cắt nhau hay không. Nếu hai đoạn thẳng giao nhau, tìm toạ độ giao điểm của chúng.

### Input

- Dòng đầu chứa một số $T$ là số lượng test.
- $T$ dòng tiếp theo, mỗi dòng chứa $8$ số nguyên $x_1,y_1,x_2,y_2,x_3,y_3,x_4,y_4$.

### Output

- Với mỗi test in ra hai số $x,y$ chính xác đến 6 chữ số 6 dấu `.` nếu chúng giao nhau, và `-1` nếu ngược lại.

### Constraints

- $1\le t\le 10^5$
- $|x_i|,|y_i|\le 10^9$
- $(x_1,y_1)\ne(x_2,y_2)$
- $(x_3,y_3)\ne(x_4,y_4)$

### Example

|Input|Output|
|-|-|
|5<br>1 1 5 3 1 2 4 3<br>1 1 5 3 1 1 4 3<br>1 1 5 3 2 3 4 1<br>1 1 5 3 2 4 4 1<br>1 1 5 3 3 2 7 4|NO<br>YES<br>YES<br>YES<br>YES|

# Bài 3

Cho 2 đường thẳng;

$$
\begin{split}
(d_1):&\ A_1x+B_1y+C_1=0 \\
(d_2):&\ A_2x+B_2y+C_2=0
\end{split}
$$

Nhiệm vụ của bạn là kiểm tra 2 đường thẳng cắt nhau hay không. Nếu hai đường thẳng giao nhau tại một điểm, tìm toạ độ giao điểm của chúng, nếu chúng có nhiều hơn 1 điểm chung, trả về `inf`.

## Input

- Dòng đầu chứa một số $T$ là số lượng test.
- $T$ dòng tiếp theo, mỗi dòng chứa $8$ số nguyên $x_1,y_1,x_2,y_2,x_3,y_3,x_4,y_4$.

## Output

- Với mỗi test in ra hai số $x,y$ chính xác đến 6 chữ số 6 dấu `.` nếu chúng giao nhau, và `-1` nếu ngược lại.

## Constraints

- $1\le t\le 10^5$
- $|x_i|,|y_i|\le 10^9$
- $(x_1,y_1)\ne(x_2,y_2)$
- $(x_3,y_3)\ne(x_4,y_4)$

## Example

|Input|Output|
|-|-|
|5<br>1 1 5 3 1 2 4 3<br>1 1 5 3 1 1 4 3<br>1 1 5 3 2 3 4 1<br>1 1 5 3 2 4 4 1<br>1 1 5 3 3 2 7 4|NO<br>YES<br>YES<br>YES<br>YES|