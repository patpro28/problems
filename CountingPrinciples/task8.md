<!-- https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1482 -->

Bạn được cho một hình chữ nhật $1 \times N$, trong đó các ô vuông $1 \times 1$ của nó có thể được sơn màu trắng hoặc đen. Vì vậy, bạn có thể xây dựng một "mã" của hình chữ nhật này — đây sẽ là một dãy số, số lượng các ô vuông màu đen liên tiếp từ trái sang phải.

![alt text](task8_1.png)

Ví dụ, mã của hình chữ nhật này là `2 3 2 8 1`. Tuy nhiên, số lượng các ô vuông màu trắng không được tính vào bất cứ đâu (nhưng hai nhóm ô vuông màu đen phải được ngăn cách bởi ít nhất một ô màu trắng). Đó là lý do tại sao có một vài hình chữ nhật có thể thỏa mãn cùng một mã. Ví dụ, hình chữ nhật sau cũng thỏa mãn mã đã cho.

![alt text](task8_2.png)

Vấn đề là tính toán số lượng hình chữ nhật có thể thỏa mãn mã đã cho.

### Đầu vào

Có thể có nhiều bộ kiểm tra. Dòng đầu tiên của đầu vào cho bạn số lượng bộ kiểm tra $T$ ($1 < T < 20$). Trong $T$ dòng tiếp theo, bạn sẽ có đầu vào cho mỗi bộ kiểm tra. Mỗi bộ kiểm tra bao gồm $N$ là chiều dài của một hình chữ nhật ($1 \leq N \leq 200$). Sau đó là $K$ - số lượng các số trong một mã ($0 \leq K \leq \frac{N + 1}{2}$). Sau đó $K$ số, đại diện cho mã chính nó.

### Đầu ra

Đầu ra bao gồm một số — số lượng hình chữ nhật có thể thỏa mãn mã đã cho. Vì kết quả có thể rất lớn, bạn chỉ cần in ra phần dư của nó khi chia cho $2024$.

### Ví dụ đầu vào

    3
    4 0
    5 2 1 2
    4 2 2 2

### Ví dụ đầu ra

    1
    3
    0