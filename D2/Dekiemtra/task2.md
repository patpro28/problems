# Bài 2: Bộ 3 RGB

Cho xâu ký tự $S$ độ dài $N$ bao gồm các ký tự $R$, $G$ và $B$.
Tìm số lượng bộ ba $(i,j,k)$ $(1\leq i<j<k\leq N)$ thỏa mãn 2 điều kiện sau:

- $S_i\neq S_j$, $S_i\neq S_k$ và $S_j\neq S_k$.
- $j−i\neq k−j$.

## Input
- Dòng đầu chứa số nguyên $N$ $(1\leq N\leq 4000)$
- Dòng thứ 2 chứa xâu ký tự $S$

## Output
- In ra số lượng bộ ba thỏa mãn

## Sample Input
    4
    RRGB

## Sample Output 
    1