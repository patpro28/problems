Hai số nguyên dương $A$ và $B$ được gọi là bạn của nhau nếu chúng có chung ít nhất một chữ số.

Cho một mảng $A$ gồm $N$ số nguyên dương. Hãy tìm số lượng cặp $i<j$ thoả mãn $A[i]$ và $A[j]$ là bạn của nhau.

## Input

- Dòng đầu tiên chứa số nguyên dương $T$, số lượng bộ test.
- Mỗi test gồm 2 dòng:
    - Dòng đầu tiên chứa số nguyên dương $N$.
    - Dòng thứ hai chứa $N$ số nguyên dương $A_1, A_2, \dots, A_N$.

## Output

- Với mỗi test, in ra số lượng cặp $i<j$ thoả mãn $A[i]$ và $A[j]$ là bạn của nhau.

## Constraints

- $1 \le T \le 5$
- $1 \le N \le 10^6$
- $1 \le A_i \le 10^{18}$

## Example

| Input                                  | Output |
| -------------------------------------- | ------ |
| 2<br>3<br>10 12 24<br>4<br>10 11 211 3 | 2<br>3 |