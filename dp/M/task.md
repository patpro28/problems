Có $N$ đứa trẻ được đánh số từ $1$ đến $N$.

Chúng quyết định chia sẻ $K$ viên kẹo cho nhau. Để tránh sâu răng, đứa trẻ thứ $i$ chỉ nhận không quá $a_i$ viên kẹo (có thể không viên nào). Tất nhiên, không có viên kẹo nào bị bỏ lại.

Tìm số cách chia kẹo thỏa mãn yêu cầu trên, module $10^9+7$. Hai cách chia được gọi là khác nhau nếu tồn tại đứa trẻ nhận được số kẹo khác nhau trong hai cách chia.

## Input

- Dòng đầu chứa hai số nguyên $N$ và $K$.
- Dòng 2 chứa $N$ số nguyên $a_i$.

## Output

- Một số nguyên duy nhất là số cách chia kẹo thỏa mãn yêu cầu trên, module $10^9+7$.

## Constraints

- $1 \le N \le 100$.
- $0 \le K \le 10^5$.
- $0 \le a_i \le K$.

## Example

| Input                                   | Output    |
| --------------------------------------- | --------- |
| 3 4<br>1 2 3                            | 5         |
| 4 100000<br>100000 100000 100000 100000 | 665683269 |