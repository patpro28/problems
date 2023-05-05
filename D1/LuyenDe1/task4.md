# XOR sum

Cho 3 số nguyên $L, R, V$. Tìm số lượng cặp số nguyên $(l,r)$ thoả mãn cả hai điều kiện dưới đây module cho $998244353$:

- $L \le l \le r \le R$
- $l \oplus (l + 1) \oplus ... \oplus r = V$

Ở đây, $\oplus$ là phép XOR.

## Input

- Một dòng duy nhất chứa 3 số nguyên $L, R, V$.

## Output

- Một số nguyên duy nhất là số lượng cặp số nguyên $(l,r)$ thoả mãn.

## Constraints

- $1 \le L \le R \le 10^{18}$
- $0 \le V \le 10^{18}$

## Example

| Input             | Output |
| ----------------- | ------ |
| 1 3 3             | 2      |
| 10 20 0           | 6      |
| 12345 56789 34567 | 16950  |