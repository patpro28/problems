Có $N$ hòn đá, đánh số từ $1$ đến $N$. Mỗi hòn đá có một độ cao $h_i$. Với $h_1<h_2<\cdots<h_N$.

Ban đầu có một con ếch đứng ở trên hòn đá thứ nhất. Nó sẽ nhảy vài lần để đến được hòn đá thứ $N$.

- Nếu con ếch đang đứng ở hòn đá thứ $i$, nó có thể nhảy đến một trong các hòn đá thứ $i+1,i+2,\ldots,i+N$. Năng lượng cho một lần nhảy là $(h_i-h_j)^2+C$ với $j$ là hòn đá được nhảy đến.

Tính số năng lượng tối thiểu để con ếch có thể nhảy đến hòn đá thứ $N$.

## Input

- Dòng đầu chứa hai số nguyên dương $N, C$.
- Dòng thứ hai chứa $N$ số nguyên $h_i$.

## Output

- Một số duy nhất là kết quả bài toán.

## Constraints

- $2\le N\le 2\times 10^5$
- $1\le C\le 10^{12}$
- $1\le h_1<h_2<\ldots<h_N\le 10^6$

## Example

| Input                      | Output |
| -------------------------- | ------ |
| 5 6<br>1 2 3 4 5           | 20     |
| 8 5<br>1 3 4 5 10 11 12 13 | 62     |