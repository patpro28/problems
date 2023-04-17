Chỉnh hợp là một khái niệm trong toán học, đại diện cho số cách chọn **một tập hợp** các phần tử **không lặp lại** và **không theo thứ tự** từ một tập hợp lớn hơn. Trong chỉnh hợp, thứ tự các phần tử được xem là quan trọng, nghĩa là các tập hợp có cùng các phần tử nhưng được sắp xếp khác nhau sẽ được tính là hai chỉnh hợp khác nhau.

Ví dụ, nếu chọn 3 quả bóng từ 5 quả bóng có các màu khác nhau, ta có thể tính được số chỉnh hợp của nó như sau: với lần chọn đầu tiên, có 5 lựa chọn, với lần chọn thứ hai chỉ còn 4 lựa chọn (do bóng đó đã được lấy đi), và với lần chọn cuối cùng còn 3 lựa chọn. Vậy số chỉnh hợp của 3 quả bóng từ 5 quả bóng là $5\times4\times3=60$.

Để tính số chỉnh hợp, ta có thể sử dụng công thức sau:

$$A(n,k)=A_n^k=n(n−1)(n−2)\cdots(n−k+1)=\frac{n!}{(n-k)!}$$

Trong đó $A(n,k)$ là số chỉnh hợp của $k$ phần tử từ $n$ phần tử, $A_n^k$ là ký hiệu khác của $A(n,k)$, và $n!$ là tích của các số tự nhiên từ 1 đến $n$.

Cho một tập hợp $A$ gồm $N$ phần tử phân biệt. Chúng ta sắp xếp các chỉnh hợp không lặp chập $k$ của $A$ theo thứ tự từ điển, và đánh số hiệu cho chúng theo thứ tự tăng dần từ 1. Chúng ta sẽ có $A_n^k$ chỉnh hợp không lặp chập $k$ của $A$. Yêu cầu:

1. Cho một số nguyên dương $P$. Tìm chỉnh hợp không lặp chập $k$ của $A$ có số hiệu $P$.
2. Cho một chỉnh hợp không lặp chập $k$ của $A$. Tìm số hiệu của chỉnh hợp đó.

## Input

- Dòng đầu tiên chứa hai số nguyên $N$ và $k$.
- Dòng 2 chứa $N$ số nguyên $a_1, a_2, \dots, a_N$.
- Dòng 3 chứa một số nguyên dương $P$.
- Dòng 4 chứa $k$ số nguyên $b_1, b_2, \dots, b_k$.

## Output

- Dòng 1 chứa $k$ số nguyên $c_1, c_2, \dots, c_k$ là chỉnh hợp không lặp chập $k$ của $A$ có số hiệu $P$.
- Dòng 2 chứa một số nguyên dương $Q$ là số hiệu của chỉnh hợp $b_1, b_2, \dots, b_k$.

## Constraints

- $1 \le k \le N \le 10^3$
- $1 \le a_i,b_i \le 10^9$
- $1 \le P \le A_n^k$
- $a_i$ là các số nguyên dương khác nhau.

## Example

| Input                           | Output       |
| ------------------------------- | ------------ |
| 5 3<br>10 2 4 6 8<br>5<br>6 4 2 | 2 6 8 <br>28 |