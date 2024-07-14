Cho $K$ cái hộp được đánh số từ $1$ đến $K$. Ban đầu, tất cả các hộp đều rỗng. Bạn có một số quả bóng được viết lên một số từ $1$ đến $N$. Trong số đó, có $a_i$ quả bóng được viết lên số $i$. Những quả bóng được viết số giống nhau không thể phân biệt.

Bạn được yêu cầu bỏ tất cả các quả bóng vào trong các hộp sao cho số lượng quả bóng được viết số $1$ chiếm số đông trong mọi hộp. Nói cách khác, trong mọi hộp, số lượng quả bóng được viết số 1 nhiều hơn tổng số lượng các quả bóng còn lại.

Hãy tính số cách bỏ các quả bóng vào các hộp, chia lấy dư cho $998244353$.

Hai cách được coi là khác nhau nếu tồn tại một cặp $(i,j)$ thoả mãn $1\le i\le K, 1\le j\le N$ sao cho số lượng quả bóng được viết số $j$ ở trong hộp $i$ là khác nhau.

## Input

- Dòng đầu tiên chứa 2 số nguyên $N, K$.
- Dòng thứ hai chứa $N$ số nguyên $a_1, a_2, \dots, a_N$.

## Output

- Một số nguyên duy nhất là số cách bỏ quả bóng vào các hộp, chia lấy dư cho $998244353$.

## Constraints

- $1 \le N \le 10^5$.
- $1 \le K \le 200$.
- $1 \le a_i < 998244353$.

## Example

| Input      | Output |
| ---------- | ------ |
| 2 2<br>3 1 | 2      |