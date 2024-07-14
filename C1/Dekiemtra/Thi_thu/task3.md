# Một lần hoán đổi

<!-- https://atcoder.jp/contests/abc345/tasks/abc345_c -->

Bạn được cung cấp một chuỗi ký tự $S$ chỉ chứa các kí tự latinh in thường. Hãy tìm số lượng các chuỗi khác nhau có thể được tạo ra bằng cách thực hiện chính xác một lần thao tác sau đây:

- Cho $N$ là độ dài của $S$. Chọn một cặp số nguyên $(i, j)$ sao cho $1 \le i < j \le N$ và hoán đổi ký tự thứ $i$ và thứ $j$ của $S$.

## Input

- Một dòng duy nhất chứa chuỗi $S$ $(2\le |S|\le 10^6)$.

## Output

- In ra số lượng chuỗi có thể được tạo ra bằng cách thực hiện thao tác trong đề bài đúng một lần trên $S$.

## Ví dụ

| Input | Output |
|-------|--------|
| abc   | 3      |
| aaaaa | 1      |

## Rằng buộc

- $50\%$ số test có $|S| \le 100$.