# Bài 3: Trò chơi trên dãy số

Ba bạn học sinh trong lúc nhàn rỗi nghĩ ra trò chơi sau đây. Mỗi bạn chọn trước một dãy số gồm $n$ số nguyên. Giả sử dãy số mà bạn thứ nhất chọn là $a_1, a_2, ..., a_n$, dãy số bạn thứ hai chọn là $b_1, b_2, ..., b_n$, và dãy số bạn thứ ba chọn là $c_1, c_2, ..., c_n$. Mỗi lượt chơi, bạn thứ nhất chọn một chỉ số $i$, bạn thứ hai chọn chỉ số $j$, bạn thứ ba chọn chỉ số $k$ thỏa mãn: $i < j < k$ và điểm cho lượt chơi đó bằng tích $a_i \times b_j \times c_k$.

Ví dụ: Với $n = 4$, dãy số bạn thứ nhất chọn $-3, 2, 3, 0$; dãy số bạn thứ hai chọn $1, 1, 1, 0$; còn dãy số bạn thứ ba chọn $9, 1, 0, -2$. Khi đó nếu bạn thứ nhất chọn $i = 1$, bạn thứ hai chọn $j = 2$, còn bạn thứ ba chọn $k = 4$ thì được $( -3 ) \times 1 \times ( -2 ) = 6$ điểm và đây là cách chọn để đạt điểm cao nhất trong số các cách chọn thỏa mãn.

## Yêu cầu

- Cho ba dãy số $a_1, a_2, ..., a_n$, $b_1, b_2, ..., b_n$ và $c_1, c_2, ..., c_n$. Hãy xác định điểm cao nhất trong số các cách chọn thỏa mãn.

## Dữ liệu vào

  - Dòng đầu tiên chứa số nguyên dương $n$;
  - Dòng thứ hai chứa dãy số nguyên $a_1, a_2, ..., a_n$ $(|a_i| \le 10^6, i = 1, 2, ..., n)$;
  - Dòng thứ ba chứa dãy số nguyên $b_1, b_2, ..., b_n$ $(|b_i| \le 10^6, i = 1, 2, ..., n)$;
  - Dòng thứ tư chứa dãy số nguyên $c_1, c_2, ..., c_n$ $(|c_i| \le 10^6, i = 1, 2, ..., n)$.

## Dữ liệu ra

- Ghi ra một số nguyên là điểm cao nhất trong số các cách chọn thỏa mãn.

## Ví dụ

    4
    -3 2 3 0
    1 1 1 0
    9 1 0 -2


    6

## Ràng buộc

- Có 40% số test trong với 40% số điểm của bài có $n \le 300$;
- Có 30% số test trong với 30% số điểm của bài có $n \le 3000$;
- Có 30% số test khác ứng với 30% số điểm của bài có $n \le 300000$.