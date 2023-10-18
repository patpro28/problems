Khải và Hưng đang chơi một trò chơi theo lượt như sau:

Ban đầu họ nhận được một dãy số nguyên $A=(a_1,a_2,...,a_N)$. Hai người chơi sẽ lần lượt thực hiện thao tác sau cho đến khi dãy $A$ trở thành dãy rỗng, Khải chơi trước:

- Xoá một phần tử ở đầu hoặc ở cuối của dãy $A$, người chơi sẽ nhận được $x$ điểm với $x$ là phần tử bị xoá.

Gọi $X$ và $Y$ lần lượt là điểm của Khải và Hưng sau khi dãy $A$ trở thành dãy rỗng. Khải sẽ cố làm cho $X-Y$ lớn nhất có thể trong khi Hưng sẽ cố làm cho $X-Y$ nhỏ nhất có thể. 

Trong trường hợp cả 2 đều chơi tối ưu nhất, tìm giá trị cuối cùng của $X-Y$.

## Input

- Dòng đầu tiên chứa số nguyên $N$.
- Dòng thứ hai chứa $N$ số nguyên $a_1,a_2,...,a_N$.

## Output

- In ra giá trị cuối cùng của $X-Y$.

## Constraints

- $1 ≤ N ≤ 3000$
- $1 ≤ a_i ≤ 10^9$

## Example

| Input              | Output |
| ------------------ | ------ |
| 4 <br> 10 80 90 30 | 10     |
| 3 <br> 10 100 10   | -80    |
| 6 <br> 4 2 9 7 1 5 | 2      |