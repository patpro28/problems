Cho số nguyên dương $N$, dãy Calalan cấp $N$ là dãy số $C_0, C_1, \dots, C_{2N}$ được định nghĩa như sau:

- $C_0 = C_{2N} = 0$
- $|C_i-C_{i+1}| = 1$ với $0 \le i \le 2N-1$
- $C_i \ge 0$ với $0 \le i \le 2N-1$

Đếm số lượng dãy Calalan cấp $N$ modulo $10^9+7$.

## Input

- Dòng đầu tiên chứa số nguyên dương $T$.
- $T$ dòng tiếp theo, mỗi dòng chứa một số nguyên dương $N$.

## Output

- $T$ dòng, mỗi dòng chứa một số nguyên là số lượng dãy Calalan cấp $N$ modulo $10^9+7$.

## Constraints

- $1 \le T \le 10^5$
- $1 \le N \le 10^5$

## Subtasks

- Subtask 1 (80 points): $1 \le T, N \le 10^2$
- Subtask 2 (20 points): $1 \le T, N \le 10^5$

## Example

| Input            | Output         |
| ---------------- | -------------- |
| 3<br>2<br>4<br>6 | 2<br>14<br>132 |  |