# Luyện đề 3 - Bài 2 - Số lần thao tác

Cho hai số nguyên $a, b$. Khởi tạo ban đầu $a = A$ và $b = B$.

Thế Anh muốn lặp lại các thao tác sau cho đến khi một trong hai số bằng $0$:

- Gọi $g$ là ước chung lớn nhất của $a$ và $b$. Thế Anh sẽ thay thế $a$ bằng $a-g$ và $b$ bằng $b-g$.

Thế Anh cần thực hiện bao nhiều lần thao tác trên?

## Input

- Dòng đầu chứa hai số nguyên $A$ và $B$.

## Output

- Một số nguyên duy nhất là số lần thao tác cần thực hiện.

## Constraints

- $1 \le A, B \le 10^{12}$

## Example

| Input               | Output |
| ------------------- | ------ |
| 12 18               | 2      |
| 15 9                | 2      |
| 123456789 987654321 | 610    |