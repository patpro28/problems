Cho $n$ đoạn thẳng trên trục số và toạ độ của $m$ điểm trên trục số này. Đoạn thẳng thứ $i$ được xác định bởi $a_i, b_i$ - toạ độ hai đầu của nó. Điểm thứ $j$ có toạ độ $d_j$. Đoạn thẳng thứ $k$ chứa điểm có toạ độ $x$ nếu $\min{(a_k,b_k)}\le x \le \max{(a_k,b_k)}$. 

## Yêu cầu

- Với mỗi điểm thứ $j$, hãy tính số đoạn thẳng chứa điểm đó.

## Dữ liệu

- Dòng đầu chứa hai số nguyên $n, m$ ($1 \le n, m \le 10^5$).
- Dòng thứ $i$ trong $n$ dòng tiếp theo chứa hai số nguyên $a_i, b_i$ ($0 \le |a_i|, |b_i| \le 10^9$).
- Dòng cuối cùng chứa $m$ số nguyên $d_j$ ($0 \le |d_j| \le 10^9$).

## Kết quả

- In ra $m$ số nguyên trên một dòng, số thứ $j$ là số đoạn thẳng chứa điểm thứ $j$.

## Ví dụ

| Input                             | Output |
| --------------------------------- | ------ |
| 3 2<br>0 5<br>-3 2<br>7 10<br>1 6 | 2 0    |