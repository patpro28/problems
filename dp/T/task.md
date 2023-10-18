Cho một số nguyên dương $N$ và một xâu $S$ độ dài $N-1$ chỉ gồm hai loại kí tự là `<` và `>`.

Tìm số lượng hoán vị $(p_1,p_2,...,p_N)$ của $(1,2,...,N)$ thỏa mãn điều kiện sau module cho $10^9+7$:

- Với mỗi chỉ số $i\ (1\le i\le N-1)$, $p_i<p_{i+1}$ nếu $S_i=$ `<` và $p_i>p_{i+1}$ nếu $S_i=$ `>`.

## Input

- Dòng đầu chứa hai số nguyên dương $N$.
- Dòng thứ hai chứa xâu $S$ độ dài $N-1$ chỉ gồm hai loại kí tự là `<` và `>`.

## Output

- Một số nguyên duy nhất là số lượng hoán vị thỏa mãn.

## Constraints

- $1 \le N \le 3000$.

## Example 

| Input                      | Output    |
| -------------------------- | --------- |
| 4<br><><                   | 5         |
| 5<br><<<<                  | 1         |
| 20<br>>>>>><>>><>><>>><<>> | 217136290 |
