# Lưới hoán vị

Cho hai dãy hoán vị của $1,2,...,n$: $R=(R_1,R_2,...,R_n)$ và $C=(C_1,C_2,...,C_n)$.

Chúng ta có một lưới các ô vuông gồm $n$ hàng và $n$ cột. Bạn sẽ tô mỗi ô thuộc một trong hai màu đen hoặc trắng thoả mãn điều kiện sau:

- Với mỗi $i=1,...,n$, hàng thứ $i$ từ trên xuống dưới có đúng $R_i$ ô màu đen.
- Với mỗi $j=1,...,n$, cột thứ $j$ từ trái sang phải có đúng $C_j$ ô màu đen.

Chúng ta có thể chứng minh chỉ có đúng một cách tô màu thoả mãn.

Bạn được cho $q$ truy vấn $(r_i,c_i)$, với mỗi truy vấn bạn cần trả lời xem ô $(r_i,c_i)$ có màu gì. In ra `#` nếu ô đó màu đen, in ra `.` nếu ô đó màu trắng. $r_i$ là hàng thứ $r_i$ tính từ trên xuống dưới, $c_i$ là cột thứ $c_i$ tính từ trái sang phải.

## Input

- Dòng đầu chứa một số nguyên dương $n$.
- Dòng thứ hai chứa $n$ số nguyên $R_1,R_2,...,R_n$.
- Dòng thứ ba chứa $n$ số nguyên $C_1,C_2,...,C_n$.
- Dòng thứ tư chứa một số nguyên dương $q$.
- $q$ dòng tiếp theo, dòng thứ $i$ chứa hai số nguyên $r_i$ và $c_i$.

## Output

- In ra trên một dòng, $q$ ký tự `#` hoặc `.` theo thứ tự tương ứng với $q$ truy vấn.

## Constraints

- $1 \le n \le 10^5$
- $1 \le q \le 10^5$
- $1 \le R_i,C_i \le n$
- $1 \le r_i,c_i \le n$
- Có đảm bảo tồn tại một cách tô màu thoả mãn.

## Example

| Input                                                                             | Output  | Explain                                   |
| --------------------------------------------------------------------------------- | ------- | ----------------------------------------- |
| 5<br>5 2 3 4 1<br>4 2 3 1 5<br>7<br>1 5<br>5 1<br>1 1<br>2 2<br>3 3<br>4 4<br>5 5 | #.#.#.# | #####<br>#...#<br>#.#.#<br>###.#<br>....# |