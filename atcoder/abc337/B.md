Chúng ta định nghĩa xâu A mở rộng, xâu B mở rộng, xâu C mở rộng và xâu ABC mở rộng như sau:

- Một xâu $S$ được gọi là xâu A mở rộng nếu $S$ rỗng hoặc chỉ chứa các ký tự `A`.
- Một xâu $S$ được gọi là xâu B mở rộng nếu $S$ rỗng hoặc chỉ chứa các ký tự `B`.
- Một xâu $S$ được gọi là xâu C mở rộng nếu $S$ rỗng hoặc chỉ chứa các ký tự `C`.
- Một xâu $S$ được gọi là xâu ABC mở rộng nếu $S$ có thể chia thành ba xâu $S_1$, $S_2$, $S_3$ sao cho $S_1$ là xâu A mở rộng, $S_2$ là xâu B mở rộng và $S_3$ là xâu C mở rộng.

Ví dụ, xâu `ABC`, `A` và `AAABBBCCCCCCCC` là xâu ABC mở rộng, nhưng các xâu `ABBAAA`, `BBBCCCCCCCCCAA` không phải là xâu ABC mở rộng.

Cho một xâu $S$ chỉ chứa các ký tự `A`, `B`, `C`. Hãy cho biết xâu $S$ có phải là xâu ABC mở rộng hay không.

## Input

- Một dòng chứa một số xâu $S$ có độ dài không vượt quá $100$.

## Output

- In ra `Yes` nếu xâu $S$ là xâu ABC mở rộng, ngược lại in ra `No`.

## Example

| Input         | Output |
| ------------- | ------ |
| ACABABCBC     | No     |
| AAABBBCCCCCCC | Yes    |