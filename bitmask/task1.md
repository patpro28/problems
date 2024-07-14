Cửa hàng tạp hoá TMATH vừa khai trương tại nhà 9, ngõ 6, Minh Khai. Để quảng bá cửa hàng, thầy Toàn đưa ra một chương trình khuyến mãi đặc biệt: mỗi ngày tất cả các món hàng đều sẽ được giảm giá, ngày thứ $d$ giá của món hàng thứ $i$ sẽ là $p_{i,d}$ đồng, tuy nhiên mỗi người chỉ được mua một sản phẩm được giảm giá trong ngày đó, sau khi mua món thứ $i$ thì giá của các món hàng trong ngày sẽ về giá gốc.

Thế Anh muốn mua tất cả món hàng của cửa hàng TMATH, mỗi món đúng một lần. Là một nhà săn sale chuyên nghiệp, Thế Anh sẽ không bao giờ mua giá gốc, Thế Anh muốn mua món hàng có giá thấp nhất có thể. Hãy giúp Thế Anh tìm ra giá thấp nhất mà anh ta có thể mua được tất cả các món hàng.

## Input 

- Dòng đầu chứa hai số nguyên $n$ và $m$ $(1 \leq n \leq 10^5, 1 \leq m \leq 7)$ là số lượng ngày và số lượng món hàng.
- $m$ dòng tiếp theo, dòng thứ $i$ chứa $n$ số nguyên $p_{i,1}, p_{i,2}, \dots, p_{i,n}$ $(1 \leq p_{i,d} \leq 10^4)$ là giá của món hàng thứ $i$ vào ngày thứ $d$.

## Output

- Một số nguyên duy nhất là giá thấp nhất mà Thế Anh có thể mua được tất cả các món hàng.

## Example

| Input                                                        | Output |
| ------------------------------------------------------------ | ------ |
| 8 3<br>6 9 5 2 8 9 1 6<br>8 2 6 2 7 5 7 2<br>5 3 9 7 3 5 1 4 | 5      |