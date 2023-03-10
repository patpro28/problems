Cho 2 đoạn thẳng, đoạn thẳng đầu tiên có 2 đầu mút lần lượt là $(x_1,y_1)$ và $(x_2,y_2)$, và đoạn thẳng thứ $2$ có toạ độ 2 đầu mút lần lượt là $(x_3,y_3)$ và $(x_4,y_4)$.

Nhiệm vụ của bạn là kiểm tra 2 đoạn thẳng cắt nhau hay không.

## Input

- Dòng đầu chứa một số $T$ là số lượng test.
- $T$ dòng tiếp theo, mỗi dòng chứa $8$ số nguyên $x_1,y_1,x_2,y_2,x_3,y_3,x_4,y_4$.

## Output

- Với mỗi test in ra `YES` nếu chúng giao nhau, và `NO` nếu ngược lại.

## Constraints

- $1\le t\le 10^5$
- $|x_i|,|y_i|\le 10^9$
- $(x_1,y_1)\ne(x_2,y_2)$
- $(x_3,y_3)\ne(x_4,y_4)$

## Example

|Input|Output|
|-|-|
|5<br>1 1 5 3 1 2 4 3<br>1 1 5 3 1 1 4 3<br>1 1 5 3 2 3 4 1<br>1 1 5 3 2 4 4 1<br>1 1 5 3 3 2 7 4|NO<br>YES<br>YES<br>YES<br>YES|