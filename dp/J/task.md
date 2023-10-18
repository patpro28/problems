Cho $N$ đĩa sushi được đánh số từ $1$ đến $N$. Ban đầu, đĩa thứ $i$ có $a_i\ (1\le a_i\le 3)$ miếng sushi.

Thế Anh lặp lại thao tác sau cho đến khi tất cả miếng sushi được ăn hết:

- Lắc xúc xắc có $N$ mặt từ $1$ đến $N$ với xác suất của các mặt là như nhau, giả sử lắc được số $i$. Nếu có sushi trên đĩa thứ $i$ thì Thế Anh sẽ ăn một miếng trên đĩa đấy, ngược lại thì không làm gì.

Tính kỳ vọng số lần thực hiện thao tác trên trước khi tất cả các miếng sushi được ăn hết.

## Input

- Dòng đầu tiên chứa số nguyên $N$ ($1 \le N \le 300$) — số lượng đĩa sushi.
- Dòng thứ hai chứa $N$ số nguyên $a_1, a_2, \dots, a_N$ ($1 \le a_i \le 3$) — số lượng miếng sushi ban đầu trên các đĩa.

## Output

In ra một số thực là kết quả của bài toán với độ chính xác ít nhất $9$ chữ số sau dấu phẩy.

## Example

| Input                       | Output            |
| --------------------------- | ----------------- |
| 3 <br> 1 1 1                | 5.5               |
| 1 <br> 3                    | 3                 |
| 2 <br> 1 2                  | 4.5               |
| 10 <br> 1 3 2 3 3 2 3 2 1 3 | 54.48064457488221 |