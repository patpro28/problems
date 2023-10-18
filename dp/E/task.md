Có $N$ món đồ, đánh số từ $1$ đến $N$. Món đồ thứ $i$ có giá trị $v_i$ và khối lượng $w_i$. Bạn có một cái túi có thể chứa tối đa $W$ khối lượng. Bạn muốn chọn một số món đồ sao cho tổng giá trị của chúng là lớn nhất và tổng khối lượng không vượt quá $W$.

Hãy tính tổng giá trị lớn nhất có thể đạt được.

## Input

- Dòng đầu tiên chứa hai số nguyên $N$ và $W$.
- $N$ dòng tiếp theo, dòng thứ $i$ chứa hai số nguyên $w_i$ và $v_i$.

## Output

- Một số nguyên duy nhất là tổng giá trị lớn nhất có thể đạt được.

## Constraints

- $1 \le N \le 100$
- $1 \le W \le 10^9$
- $1 \le v_i \le 10^3$
- $1 \le w_i \le W$

## Example

| Input                                                | Output |
| ---------------------------------------------------- | ------ |
| 3 8<br/>3 30<br/>4 50<br/>5 60                       | 90     |
| 1 1000000000<br/>1000000000 10                       | 10     |
| 6 15<br/>6 5<br/>5 6<br/>6 4<br/>6 6<br/>3 5<br/>7 2 | 17     |