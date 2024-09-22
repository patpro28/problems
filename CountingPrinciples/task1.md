Cho một số nguyên dương $N$, đếm số cách chọn $k$ số $a_1, a_2, \ldots, a_k$ sao cho $1 \leq a_1 \le a_2 \le \ldots \le a_k \le N$ và $\frac{a_{i+1}}{a_i}=\frac{a_{i+2}}{a_{i+1}}$ với mọi $i$ ($1 \le i < k - 1$).

## Đầu vào

- Một dòng duy nhất chứa hai số nguyên $N$ và $k$ ($3 \le k \le 10; 2 \le N \le 10^9$).

## Đầu ra

- Một số nguyên duy nhất là số cách chọn thỏa mãn.

## Ví dụ

| Input | Output |
| ----- | ------ |
| 500 4 | 594    |

## Solution

Ta có thể thấy rằng dãy $a_1, a_2, \ldots, a_k$ sẽ có dạng $a_1, a_1 \cdot r, a_1 \cdot r^2, \ldots, a_1 \cdot r^{k-1}$ với $r$ là một số nguyên dương. Vậy ta chỉ cần tìm $a_1$ và $r$ thỏa mãn điều kiện $a_1 \cdot r^{k-1} \le N$.

Chúng ta có thể duyệt các giá trị có thể có của $r$ từ $1$ đến $\sqrt[k-1]{N}$, với mỗi giá trị $r$ ta sẽ có $a_1 \le \frac{N}{r^{k-1}}$. Cuối cùng, ta sẽ có số cách chọn là tổng của các giá trị $a_1$ tìm được.

Tổng độ dài xâu là N, 7 đoạn đầu dài K thì 7 đoạn sau độ dài N - K, thì ta thống kê hash prefix của 7! đoạn đầu độ dài N - K và thống kê hash của suffix của 7! đoạn sau độ dài N - K, nếu 2 hash này bằng nhau thì ta tăng kết quả lên 1. 7! đoạn đầu chỉ lưu khi tâm nó đối xứng.