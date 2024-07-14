
Trên lòng của một con suối Byteotian dài và thẳng đặc biệt có $n$ hòn đá nhô lên trên mực nước. Khoảng cách của chúng từ nguồn của con suối lần lượt là $p_1 < p_2 < \ldots < p_n$. Một con ếch nhỏ đang ngồi trên một trong những hòn đá này và bắt đầu tập nhảy. Mỗi lần, con ếch nhảy đến hòn đá gần nó thứ $k$. Cụ thể, nếu con ếch đang ngồi trên hòn đá tại vị trí $p_i$, thì nó sẽ nhảy lên một hòn đá $p_j$ sao cho:

$$
|\{ p_a : |p_a - p_i| < |p_j - p_i|\}| \leq k \text{ và } |\{ p_a : |p_a - p_i| \leq |p_j - p_i| \} | > k
$$

Nếu $p_j$ không là duy nhất, thì con ếch sẽ chọn hòn đá gần nhất với nguồn suối. Con ếch sẽ ngồi trên hòn đá nào sau $m$ lần nhảy phụ thuộc vào hòn đá mà nó bắt đầu?

### Input

Dòng đầu tiên của đầu vào tiêu chuẩn chứa ba số nguyên $n, k, m$ $(1 \leq k < n \leq 10^6, 1 \leq m \leq 10^{18})$, cách nhau bởi khoảng trắng, lần lượt là số lượng hòn đá, tham số $k$ và số lần nhảy dự kiến. Dòng thứ hai chứa $n$ số nguyên $p_j$ $(1 \leq p_1 < p_2 < \ldots < p_n \leq 10^{18})$, cách nhau bởi khoảng trắng, đại diện cho vị trí của các hòn đá kế tiếp trên lòng suối.

### Output

Chương trình của bạn phải in ra một dòng trên đầu ra tiêu chuẩn, với $n$ số nguyên $r_1, r_2, \ldots, r_n$ từ khoảng $[1, n]$ trong đó, cách nhau bởi khoảng trắng. Số $r_i$ biểu thị số của hòn đá mà con ếch sẽ dừng lại sau khi thực hiện $m$ lần nhảy bắt đầu từ hòn đá số $i$ (theo thứ tự đầu vào).

### Ví dụ

| Input               | Output    |
| ------------------- | --------- |
| 5 2 4<br>1 2 4 7 10 | 1 1 3 1 1 |

<!-- https://usaco.guide/problems/poi-2010frog/solution -->