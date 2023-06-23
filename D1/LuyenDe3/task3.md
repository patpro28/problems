# Thêm hoán vị

Cho một dãy số nguyên $A=(a_1,a_2,...,a_N)$.

Xác định xem có thế biến các số trong dãy $A$ thành các số bằng nhau bằng cách thực hiện thao tác dưới đây không quá $10^4$ lần, nếu có thể, chỉ ra một cách làm:

- Chọn một hoán vị $p_1,p_2,...,p_N$ của $1,2,...,N$, thay thế $A$ thành $(a_1+p_1,a_2+p_2,...,a_N+p_N)$.

## Input

- Dòng đầu chứa số nguyên $N$.
- Dòng thứ 2 chứa $N$ số nguyên $a_1,a_2,...,a_N$.


## Output

- Nếu không thể biến các số trong dãy $A$ thành các số bằng nhau bằng cách thực hiện thao tác dưới đây không quá $10^4$ lần, in ra `No`.
- Nếu có thể, in ra kết quả theo định dạng sau:
    - Dòng đầu chứa `Yes`.
    - Dòng thứ 2 chứa số nguyên $K$ là số lần thực hiện thao tác.
    - $K$ dòng tiếp theo, mỗi dòng in ra một hoán vị mà sẽ thực hiện tại bước đấy.
- Nếu có nhiều kết quả, in ra một cách bất kỳ.

## Constraints

- $2\le N\le 50$
- $1\le a_i\le 50$

## Example

| Input              | Output                                                              |
| ------------------ | ------------------------------------------------------------------- |
| 2 <br> 15 9        | Yes <br> 8 <br>1 2<br>1 2<br>1 2<br>1 2<br>2 1<br>1 2<br>1 2<br>1 2 |
| 5 <br> 1 2 3 10 10 | No                                                                  |