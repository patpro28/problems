## Problem: Số Đặc Biệt

Trong giờ học môn Toán, thầy giáo đưa ra quy ước "**Số đặc biệt**" là số nguyên dương có đúng $4$ ước số dương. Ví dụ: $8$ có $4$ ước số dương gồm $1, 2, 4, 8$ nên $8$ được gọi là số đặc biệt; $25$ có $3$ ước số dương gồm $1, 5, 25$ nên $25$ không phải là số đặc biệt.

Thầy giáo cho mỗi bạn hai số nguyên dương $L, R$ $(L < R \le 10^6)$. Yêu cầu mỗi bạn đếm số lượng số đặc biệt trong đoạn $[L; R]$ (số $x$ nằm trong đoạn $[L; R]$ khi và chỉ khi $L \le x \le R$).

### Yêu cầu

Hãy lập trình giúp các bạn đếm số lượng các số đặc biệt trong đoạn $[L; R]$.

### Dữ liệu vào

Từ tệp văn bản SODBB.INP gồm:

- Dòng thứ nhất ghi số nguyên dương $T (T \le 10^6)$ là số lượng cặp số nguyên dương $L, R$.
- T dòng tiếp theo mỗi dòng ghi hai số nguyên dương $L, R$.

### Kết quả

Ghi ra tệp văn bản SODBB.OUT gồm $T$ dòng, mỗi dòng ghi số lượng các số đặc biệt trong đoạn $[L; R]$ tương ứng.

Các số trên cùng một dòng được ghi cách nhau bởi một dấu cách.

### Ví dụ

| SODBB.INP                  | SODBB.OUT   |
| -------------------------- | ----------- |
| 3<br>6 9<br>10 15<br>20 33 | 2<br>3<br>5 |

### Giải thích

- Từ $6$ đến $9$ có 2 số đặc biệt là: $6$ và $8$.               
- Từ $10$ đến $15$ có 3 số đặc biệt là: $10, 14, 15$.         
- Từ $20$ đến $33$ có 5 số đặc biệt là: $21, 22, 26, 27, 33$. 

### Ràng buộc

- $60\%$ số test ứng với $T \le 10^2, R \le 10^3$.
- $30\%$ số test ứng với $10^2 < T \le 10^3, R \le 10^5$.
- $10\%$ số test ứng với $10^3 < T \le 10^6, R \le 10^6$.