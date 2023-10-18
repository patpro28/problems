Với một xâu nhị phân độ dài $N$, điểm của nó được tính như sau:

- Với mỗi $i\ (1\le i\le M)$, $a_i$ được cộng vào điểm tổng nếu trong xâu có ít nhất một số $1$ nằm giữa ví trí $l_i$ và vị trí $r_i$ (bao gồm cả $l_i$ và $r_i$).

Tìm xâu nhị phân độ dài $N$ có điểm cao nhất.

## Input

- Dòng đầu chứa hai số nguyên dương $N$ và $M$.
- $M$ dòng tiếp theo, mỗi dòng chứa ba số nguyên $l_i, r_i, a_i$.

## Output

- Một số nguyên duy nhất là điểm cao nhất có thể đạt được.

## Constraints

- $1 \le N, M \le 2 \times 10^5$.
- $1 \le l_i \le r_i \le N$.
- $|a_i| \le 10^9$.

## Example

| Input                                           | Output | Explain |
| ----------------------------------------------- | ------ | ------- |
| 5 3<br>1 3 10<br>2 4 -10<br>3 5 10              | 20     | `10001` |
| 3 4<br>1 3 100<br>1 1 -10<br>2 2 -20<br>3 3 -30 | 90     | `100`   |
