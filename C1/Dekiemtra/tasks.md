# Bài A: Số lượng ước nguyên tố
<!-- https://c.tmath.vn/problem/toan058c -->

Số nguyên tố là một số nguyên dương lớn hơn $1$ gồm đúng $2$ ước là $1$ và chính nó.

Cho hai số nguyên $a$ và $b$, hãy viết chương trình đếm **số lượng số có số lượng ước là một số nguyên tố** trong đoạn $[a,b].$

Ví dụ: số $7$ là một số thỏa mãn vì $7$ gồm có $2$ ước là $1$, $7$ và $2$ là một số nguyên tố.

## Dữ liệu

- Dòng đầu tiên ghi một số nguyên dương $t\ (t \leq 10^6)$ là số bộ dữ liệu.
- $t$ dòng tiếp theo, mỗi dòng chứa hai số nguyên dương $a,\ b\ (1 \leq a \leq b \leq 10^6).$

## Kết quả

Gồm $t$ dòng, mỗi dòng ghi một số nguyên dương là kết quả của bộ dữ liệu tương ứng.

## Ví dụ

| A.INP    | A.OUT |
| -------- | ----- |
| 1<br>2 7 | 5     |

## Giới hạn

- Subtask $1$ ($30\%$ số điểm): $1 \leq a \leq b \leq 10^3;t \leq 10^3$.
- Subtask $2$ ($40\%$ số điểm): $t \leq 10^3$.
- Subtask $3$ ($30\%$ số điểm): không có giới hạn gì thêm.

# Bài B: Xâu khác nhau

Cho một xâu $T$ chỉ gồm các kí tự latinh thường, bạn có thể thực hiện thao tác sau một số lần:

- Xoá kí tự đầu tiên của xâu và chuyển nó về cuối xâu.

Hãy tìm số lượng xâu khác nhau có thể thu được sau một số lần thực hiện thao tác trên.

## Dữ liệu

- Một xâu $T$ có độ dài không vượt quá $3\times 10^5$.

## Kết quả

- In ra số lượng xâu khác nhau có thể thu được sau một số lần thực hiện thao tác trên.

## Ví dụ

| B.INP | B.OUT |
| ----- | ----- |
| abac  | 4     |

## Giới hạn

- Subtask $1$ ($70\%$ số điểm): $|T| \leq 10^3$.
- Subtask $2$ ($30\%$ số điểm): không có giới hạn gì thêm.


# Bài C: Dãy một liên tiếp
<!-- arc150a -->

Cho một xâu $S$ độ dài $N$ chỉ bao gồm các kí tự `0`, `1` và `?`. Chúng ta có thể thay thế mỗi kí tự `?` bằng một kí tự `0` hoặc `1` mà phải thoả mãn các điều kiện sau:

- Xâu $S$ chỉ chứa chính xác $K$ kí tự `1`.
- $K$ kí tự $1$ phải nằm liên tiếp nhau.

Hãy xác định xem có phải chỉ có **đúng 1 cách** thay thế kí tự `?` để thoả mãn yêu cầu trên hay không. 

## Input

- Dòng đầu chứa một số nguyên dương $T$ $(1 \le T \le 10^5)$ là số bộ test.
- Mỗi test gồm:
    + Dòng đầu tiên chứa hai số nguyên $N, K$ $(1 \le K < N \le 3\times10^5)$.
    + Dòng thứ hai chứa xâu $S$ độ dài $N$ chỉ bao gồm các kí tự `0`, `1` và `?`.
- Tổng độ dài của các xâu trong mỗi test không vượt quá $3\times10^5$.

## Output

- Gồm $T$ dòng, mỗi dòng in ra `Yes` nếu có đúng một cách thay thế kí tự `?` để thoả mãn yêu cầu trên, ngược lại in ra `No`.

## Example

| C.INP                          | C.OUT     |
| ------------------------------ | --------- |
| 2<br>3 2<br>1??<br>4 2<br>?1?0 | Yes<br>No |

## 

# Bài D: Thao tác ít nhất
<!-- arc163b -->

Cho một dãy số nguyên $A: A_1, A_2, \dots, A_N$. Bạn có thể thực hiện thao tác sau một số lần (có thể không thực hiện):

- Chọn một số nguyên $i\ (1 \le i \le N)$ và thực hiện tăng hoặc giảm $A_i$ một đơn vị.

Nhiệm vụ của bạn là tạo ra ít nhất $M$ vị trí $i\ (3\le i\le N)$ thoả mãn $A_1 \le A_i \le A_2$.

Tìm số thao tác ít nhất cần thực hiện để đạt được yêu cầu.

## Input

- Dòng đầu tiên chứa hai số nguyên $N, M$ $(3 \le N \le 2\times 10^5; 1 \le M \le N - 2)$.
- Dòng thứ hai chứa $N$ số nguyên $A_1, A_2, \dots, A_N$ $(1 \le A_i \le 10^9)$.

## Output

- In ra số lượng thao tác ít nhất cần thực hiện.

## Example

| D.INP        | D.OUT |
| ------------ | ----- |
| 3 1<br>2 3 5 | 2     |