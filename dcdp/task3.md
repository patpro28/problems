Bạn được cho một dãy số $a$ gồm $n$ phần tử. Định nghĩa chi phí của một dãy $t$ là:

$$
\text{cost}(t) = \sum_{x\in\text{set}(t)}{\text{last}(x) - \text{first}(x)}
$$

Với $\text{set}(x)$ là tập tất cả giá trị trong $t$ không lặp lại, $\text{first}(x)$ và $\text{last}(x)$ là chỉ số đầu tiên và cuối cùng của $x$ trong $t$. Tức là khoảng cách giữa phần tử đầu tiên và cuối cùng của $x$ trong $t$.

Bạn cần chia dãy $a$ thành $k$ dãy con liên tiếp $t_1, t_2, \dots, t_k$ sao cho tổng chi phí của các dãy con là nhỏ nhất. Hãy tìm chi phí nhỏ nhất đó.

## Input

- Dòng đầu tiên chứa hai số nguyên $n$ và $k$.
- Dòng thứ hai chứa $n$ số nguyên $a_1, a_2, \dots, a_n$.

## Output

- Một số nguyên duy nhất là chi phí nhỏ nhất.

## Constraints

- $1 \le n \le 35000$
- $1 \le k \le \min{(n, 100)}$
- $1 \le a_i \le n$

## Example

| Input                  | Output |
| ---------------------- | ------ |
| 7 2 <br> 1 6 6 4 6 6 6 | 3      |
| 7 4 <br> 5 5 5 5 2 3 3 | 1      |