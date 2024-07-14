<!-- Câu 1. (6 điểm) Cặp số nguyên tố cùng nhau -->
Tuấn là một học sinh rất yêu thích Tin học. Ước mơ của cậu sau này là trở thành một lập trình viên tài năng. Tuấn thường xuyên tìm hiểu các thông tin, sự kiện liên quan đến Công nghệ. Một sự kiện công nghệ nổi tiếng trên toàn thế giới trong thời gian gần đây là sự ra mắt robot thông minh ChatGPT của công ty công nghệ OpenAI. Tuấn cũng rất tò mò về ChatGPT nên đã sử dụng để giải bài toán. Bài toán mà Tuấn đưa cho ChatGPT như sau:

*Cho số nguyên dương $n$. Tìm số lượng các số nguyên dương $x$ nhỏ hơn $n$ thỏa mãn: $x$ và $n$ là hai số nguyên tố cùng nhau (tức là ước chung lớn nhất của $x$ và $n$ bằng $1$).*

Thật là thú vị, khi Tuấn nhập $n = 5$. ChatGPT đưa ra kết quả là: Có $4$ số, cụ thể là các số: $1, 2, 3, 4$. Tuấn muốn các bạn lập trình giải bài toán này để cùng kiểm tra kết quả của ChatGPT nhé.

## Dữ liệu

- Gồm một số nguyên dương $n\ (2\le n\le 2\times 10^9)$.

## Kết quả

- Gồm một số nguyên duy nhất là số lượng các số nguyên dương $x$, nhỏ hơn $n$ và nguyên tố cùng nhau với $n$.

## Ví dụ

| Input | Output | Explain      |
| ----- | ------ | ------------ |
| 5     | 4      | $1, 2, 3, 4$ |
| 10    | 4      | $1, 3, 7, 9$ |

## Giới hạn

- $50\%$ số test có $n\le 2000$.
- $40\%$ số test tiếp theo có $n\le 2\times10^6$.
- $10\%$ số test còn lại có $n\le 2\times10^9$.