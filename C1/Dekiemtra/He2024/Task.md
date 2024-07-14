# Đề kiểm tra

## Bài 1: Siêu nguyên tố

Mr. Bin vừa học về số nguyên tố. Nhưng anh ấy rất nhanh cảm thấy nhàm chán về chúng, do đó anh ấy quyết định định nghĩa một khái niệm mới về số nguyên tố được gọi là “siêu nguyên tố”. Một số nguyên dương $X$ được gọi là số siêu nguyên tố nếu như số lượng số nguyên tố bé hơn hoặc bằng $X$ là số nguyên tố. Hãy giúp anh ấy đếm xem trong một đoạn $[L;R]$ có bao nhiêu số siêu nguyên tố.

## Dữ liệu vào

- Dòng đầu tiên chứa một số nguyên dương $T$ $(1 \le T \le 10^5)$ là số lượng test.
- $T$ dòng tiếp theo, mỗi dòng chứa hai số nguyên dương $L, R$ $(1 \le L \le R \le 10^6)$.

## Dữ liệu ra

- Với mỗi test, in ra số lượng số siêu nguyên tố trong đoạn $[L;R]$ trên một dòng.

## Ví dụ

| Input             | Output |
| ----------------- | ------ |
| 2<br>3 10<br>4 12 | 4<br>5 |

## Giới hạn

- Có 80% số test có $T=1$.

## Bài 2: Số vui vẻ 2

Mr Bin là một cậu bé đang học tiểu học, cậu thích tìm hiểu về số học. Cậu đang nghiên cứu một loại số mà cậu tạm gọi là số vui vẻ. Cậu định nghĩa rằng: một số nguyên dương $n$ được gọi là số vui vẻ nếu tổng bình phương các chữ số của $n$ là một số chẵn. Cậu băn khoăn tự hỏi liệu có bao nhiêu số vui vẻ trong đoạn $[a, b]$ nhỉ? Nhờ bạn hãy giúp Mr Bin nhé!

### Đầu vào

- Dòng đầu chứa một số nguyên dương $T$ $(1 ≤ T ≤ 10^5)$ là số lượng test.
- $T$ dòng tiếp theo, mỗi dòng chứa hai số nguyên dương $a, b$ $(1 ≤ a ≤ b ≤ 10^6)$.

### Đầu ra

- Với mỗi test, in ra số lượng số vui vẻ trong đoạn $[a, b]$ trên một dòng.

### Ví dụ

| Input            | Output |
| ---------------- | ------ |
| 2<br>1 10<br>3 7 | 4<br>2 |

### Giới hạn

- Có 60% số test có $T, a, b ≤ 10^3$.

## Bài 3: Số con may mắn

Số $7$ được gọi là số may mắn. Bây giờ, Mr Bin định nghĩa một số con may mắn là các số chia $7$ có số dư chẵn. Mr Bin muốn tính số lượng số con may mắn trong đoạn $[a, b]$ và tổng của chúng. Bạn hãy giúp Mr Bin nhé!

### Đầu vào

- Dòng đầu chứa một số nguyên dương $T$ $(1 ≤ T ≤ 10)$ là số lượng test.
- $T$ dòng tiếp theo, mỗi dòng chứa hai số nguyên dương $a, b$ $(1 ≤ a ≤ b ≤ 10^{9})$.

### Đầu ra

- Với mỗi test, in ra số lượng số con may mắn trong đoạn $[a, b]$ và tổng của chúng trên một dòng, cách nhau bởi dấu cách.

### Ví dụ

| Input            | Output       |
| ---------------- | ------------ |
| 2<br>1 10<br>3 7 | 5 28<br>3 17 |

### Giới hạn

- Có 50% số test có $a, b ≤ 10^6$.

## Bài 4: Ước giai thừa

Cho một số nguyên dương $N$. Tìm số lượng ước nguyên dương của $N!$ modulo $10^9+7$.

### Đầu vào

Một dòng chứa một số nguyên dương $N$ $(1 \le N \le 10^3)$.

### Đầu ra

In ra số lượng ước nguyên dương của $N!$ modulo $10^9+7$.

### Ví dụ

| Input | Output    |
| ----- | --------- |
| 3     | 4         |
| 6     | 30        |
| 1000  | 972926972 |

### Giới hạn

- Có 30% số test có $N\le 10$.

### Bài 5: Số mũ

Cho 3 số tự nhiên $a, b, c$, tính giá trị của biểu thức:

$$a^{b^c} \bmod (10^9+7)$$

Ở đây chúng ta quy ước $0^0=1$.

### Đầu vào

- Dòng đầu chứa một số nguyên dương $T$ $(1 \le T \le 10^5)$ là số lượng test.
- $T$ dòng tiếp theo, mỗi dòng chứa ba số nguyên dương $a, b, c$ $(0 \le a, b, c \le 10^9)$.

### Đầu ra

- Với mỗi test, in ra giá trị của biểu thức trên một dòng.

### Ví dụ

| Input                          | Output                     |
| ------------------------------ | -------------------------- |
| 3<br>3 7 1<br>15 2 2<br>3 4 20 | 2187<br>50625<br>871990901 |

## Bài 6: Tổng ước

Định nghĩa $\sigma(n)$ là tổng tất cả các ước số của số nguyên dương $n$. Ví dụ, $\sigma(6)=1+2+3+6=12$.

Hãy tính tổng $\sigma(1)+\sigma(2)+\ldots+\sigma(n)$. Vì kết quả có thể rất lớn, hãy in ra phần dư của kết quả khi chia cho $10^9+7$.

### Đầu vào

- Một dòng chứa một số nguyên dương $n$ $(1 \le n \le 10^{12})$.

### Đầu ra

- In ra phần dư của tổng $\sigma(1)+\sigma(2)+\ldots+\sigma(n)$ khi chia cho $10^9+7$.

### Ví dụ

| Input | Output |
| ----- | ------ |
| 5     | 21     |

### Giới hạn

- Có 30% số test có $n \le 10^6$.