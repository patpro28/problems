Cho một xâu $S$, mỗi kí tự trong $S$ là một chữ số $(0...9)$ hoặc `?`.

Chúng ta có thể thay các dấu chấm hỏi bằng các chữ số, hỏi có bao nhiêu cách thay thế để số cuối cùng nhận được chia $13$ dư $5$. Cho phép số nhận được bắt đầu bằng số $0$.

Vì kết quả có thể rất lớn, in ra phần dư của kết quả khi chia cho $10^9 + 7$.

## Input

Dòng duy nhất chứa xâu $S$ ($1 \leq |S| \leq 10^5$).

## Output

In ra số cách thay thế.

## Example

| Input  | Output |
| ------ | ------ |
| ??2??5 | 768    |