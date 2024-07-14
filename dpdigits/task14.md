
Ba anh em An, Bình, Cường có n chiếc kẹo và muốn chia n chiếc kẹo thành $3$ phần, sau đó mỗi người sẽ nhận một phần. An rất yêu thích số $a$ vì đó là ngày sinh của An, do đó An sẽ chỉ nhận phần mà có số kẹo là bội của $a$, thậm chí An sẽ không nhận kẹo nếu không có phần nào là bội của $a$. Tương tự, Bình và Cường có số yêu thích tương ứng là $b$ và $c$ và cũng chỉ nhận phần có số kẹo là bội của số mà mình yêu thích. Vì vậy, ba anh em quyết định sẽ tìm cách tách số $n$ thành $3$ số nguyên không âm $x, y, z$ thỏa mãn các yêu cầu sau:

1) $x + y + z = n$;
2) $x$ chia hết cho $a$;
3) $y$ chia hết cho $b$;
4) $z$ chia hết cho $c$.

## Yêu cầu: 

Cho $4$ số nguyên dương $n, a, b, c$. Hãy đếm số cách tách $n$ thành $3$ số nguyên không âm $x, y, z$ thỏa mãn yêu cầu của ba anh em.

## Đầu vào

- Dòng đầu chứa số nguyên $T$ là số bộ dữ liệu.
- $T$ dòng sau, mỗi dòng chứa $4$ số nguyên dương $n, a, b, c\ (n \le 10^9; a,b,c \le 31)$.

## Kết quả

Gồm T dòng, mỗi dòng là kết quả tương ứng với bộ dữ liệu vào.

## Ví dụ

| Input                     | Output |
| ------------------------- | ------ |
| 2<br>10 3 3 4<br>10 6 6 6 | 3<br>0 |

## Rằng buộc

- Có $50\%$ số test có $T \le 3$.
- Có $50\%$ số test có $T \le 10^3$.