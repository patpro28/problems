Cho $N$ đồng xu được đánh số từ $1$ đến $N$, $N$ lẻ. Với đồng xu thứ $i$, khi tung nó lên, xác suất để nó ngửa là $p_i$ và xác suất để nó úp là $1-p_i$.

Bạn sẽ tung tất cả $N$ đồng xu. Tính xác suất để số đồng xu mặt ngửa nhiều hơn số đồng xu mặt úp.

## Input

- Dòng đầu tiên chứa số nguyên $N$.
- Dòng 2 chứa $N$ số thực $p_1, p_2, \dots, p_N$.

## Output

In ra một số thực là xác suất cần tìm. Kết quả được in ra với độ chính xác ít nhất 9 chữ số sau dấu phẩy.

## Constraints

- $1 ≤ N ≤ 2999$
- $0 < p_i < 1$

## Example

| Input                           | Output       |
| ------------------------------- | ------------ |
| 3 <br> 0.30 0.60 0.80           | 0.612        |
| 1 <br> 0.50                     | 0.5          |
| 5 <br> 0.42 0.01 0.42 0.99 0.42 | 0.3821815872 |