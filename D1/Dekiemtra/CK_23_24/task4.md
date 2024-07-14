Cho $3$ đoạn $[A_1, B_1], [A_2, B_2], [A_3, B_3]$, hãy lấy $3$ số nguyên $x, y, z$ lần lượt thuộc 3 đoạn trên sao cho $x \oplus y \oplus z$ đạt giá trị lớn nhất, và $3$ số $u, v, w$ lần lượt thuộc 3 đoạn trên sao cho $u \oplus v \oplus w$ đạt giá trị nhỏ nhất.

## Input

- Dòng đầu chứa $2$ số nguyên $A_1, B_1$.
- Dòng thứ hai chứa $2$ số nguyên $A_2, B_2$.
- Dòng cuối cùng chứa $2$ số nguyên $A_3, B_3$.

## Output

- In ra giá trị nhỏ nhất và lớn nhất tìm được.

## Giới hạn

- Subtask 1 (20%): $A_2=B_2; A_3=B_3;$ $0\le A_i, B_i\le 10^9$.
- Subtask 2 (20%): $B_2-A_2\le 10^6; A_3=B_3;$ $0\le A_i, B_i\le 10^9$.
- Subtask 3 (30%): $A_3=B_3;$ $0\le A_i, B_i\le 10^9$.
- Subtask 4 (30%): $0\le A_i, B_i\le 10^{15}$.

## Example

| Input                | Output  |
| -------------------- | ------- |
| 1 10<br>5 15<br>8 20 | 0<br>31 |
