Có $N$ cột đá được xếp trên hàng ngang đánh số từ $1$ đến $N$. Cột thứ $i$ có độ cao $h_i$.

Có một con ếch đang đứng ở cột $1$. Nó có thể lặp lại thao tác dưới đây một số lần để nhảy đến cột $N$:

- Nếu nó đang ở cột $i$ thì nó có thể nhảy đến cột $i+1$ hoặc $i+2$. Chi phí để nhảy đến cột $j$ là $|h_i-h_j|$.

Tìm cách nhảy sao cho tổng chi phí là nhỏ nhất.

## Input

- Dòng đầu tiên chứa số nguyên $N$.
- Dòng thứ hai chứa $N$ số nguyên $h_1, h_2, \dots, h_N$.

## Output

- Một số nguyên duy nhất là tổng chi phí nhỏ nhất.

## Giới hạn

- $2 \le N \le 10^5$
- $1 \le h_i \le 10^4$

## Example

| Input                    | Output |
| ------------------------ | ------ |
| 4 <br> 10 30 40 20       | 30     |
| 2 <br> 10 10             | 0      |
| 6 <br> 30 10 60 10 60 50 | 40     |