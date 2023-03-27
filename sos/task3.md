Hai số nguyên $x, y$ được cho là tương thích nếu kết quả của của phép and bit bằng $0$ hay $x \land y = 0$. Ví dụ, số $90(1011010_2)$ và $36(100100_2)$ tương thích, đồng thời $3(11_2)$ và $6(110_2)$ không tương thích.

Bạn được cho một dãy số nguyên $a_1,a_2,...,a_n$. Nhiệm vụ của bạn là với mỗi số nguyên $a_i$, kiểm tra xem có tồn tại một số $a_j$ mà $a_i,a_j$ tương thích hay không. Nếu tồn tại, in ra một số $a_j$ tìm được.

## Input

- Dòng đầu chứa một số nguyên dương $n$.
- Dòng 2 chứa $n$ số nguyên dương $a_i$.

## Output

- In ra $n$ số nguyên $ans_i$ trên một dòng. Nếu $a_i$ không tồn tại số tương thích với nó, $ans_i=-1$. Ngược lại, $ans_i$ là một số bất kì trong dãy $a$ thỏa mãn $ans_i\land a_i = 0$

## Constraints

- $1\le n\le 10^6$
- $1\le a_i\le 4\cdot 10^6$

## Example

|Input|Output|
|-|-|
|2<br>90 36|36 90|
|4<br>3 6 3 6|-1 -1 -1 -1|
|5<br>10 6 9 8 2|-1 8 2 2 8|
