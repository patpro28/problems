<!-- Câu 2. (5 điểm) Hàng cây sân trường -->
Ngôi trường của Tuấn chuẩn bị kỉ niệm ngày thành lập trường. Nhà trường đã trồng một hàng cây xanh trông rất đẹp. Hàng cây gồm $n$ cây xanh được đánh số thứ tự từ $1$ đến $n$ (theo hướng từ trái $n$ phải) và cách đều nhau, tức là khoảng cách giữa hai cây kể nhau là không đổi.

Để tưới nước cho cây, nhà trường có kế hoạch lắp đặt $m\ (1\le m\le n)$ vòi tưới nước tự động. Vòi nước thứ $i\ (i = 1,2,3,...m)$ được lắp tại vị trí cây thứ $X_i$, thì có thể tưới nước cho cây thứ $X_i$ và $R_i$ cây liền kề bên phải vòi nước đó, tức là vòi thứ $i$ sẽ tưới nước được cho cây thứ $j$ nếu $| j − x_i | \le R_i$. $R_i$, được gọi là bán kính tưới nước của vòi thứ $i$.

Cho biết vị trí lắp $m$ vòi nước tại $m$ cây có số thứ tự là $X_1, X_2,..., X_m\ (1 \le X_1 < X_2 < ... < X_m \le n)$ và các bán kính tưới nước là $R_1, R_2, ... ,R_m (1 \le R_1, R_2,.., R_m \le 100)$.

## Yêu cầu
Tính xem, có bao nhiêu cây được tưới nước khi lắp $m$ vòi nước tự động như trên. Một cây được tưới nước nếu có ít nhất một vòi nước có thể tưới nước cho cây đó.

## Dữ liệu

- Dòng 1 ghi hai số nguyên dương $n$ và $m\ (2\le n\le 2000; 1\le m \le n)$ tương ứng là số cây và số vòi nước.
- $m$ dòng tiếp theo, dòng thứ $i\ (i = 1, 2, ...,m)$ ghi hai số nguyên $X_i, R_i$. Trong đó $X_1$, là số thứ tự của cây đặt vòi nước thứ $i$, $R_i$ là bán kính tưới nước.

## Kết quả

- Một số nguyên duy nhất là số cây được tưới nước.

## Ví dụ

| Input             | Output |
| ----------------- | ------ |
| 8 2<br>2 2<br>5 1 | 6      |