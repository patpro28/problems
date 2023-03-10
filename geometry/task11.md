Cho 2 đường thẳng;

$$
\begin{split}
(d_1):&\ A_1x+B_1y+C_1=0 \\
(d_2):&\ A_2x+B_2y+C_2=0
\end{split}
$$

Nhiệm vụ của bạn là kiểm tra 2 đường thẳng cắt nhau hay không. Nếu hai đường thẳng giao nhau tại một điểm, tìm toạ độ giao điểm của chúng, nếu chúng trùng nhau, trả về `equivalent`, nếu chung không có điểm chung thì in ra `parallel`.

## Input

- Dòng đầu chứa 3 số nguyên $A_1,B_1,C_1$
- Dòng hai chứa 3 số nguyên $A_2,B_2,C_2$

## Output

- In ra hai số $x,y$ chính xác đến 6 chữ số 6 dấu `.` nếu chúng giao nhau, nếu chúng trùng nhau in ra `equivalent`, nếu chúng không có điểm chung thì in ra `parallel`.

## Constraints

- $|x_i|,|y_i|\le 100$
- $A_i,B_i$ không đồng thời bằng 0.

## Example

|Input|Output|
|-|-|
|2 4 3<br>4 6 2|2.5 -2|