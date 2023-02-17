<!-- https://www.codechef.com/problems/CHSTR -->
<!-- Difficult: 3 -->

# CHSTR

Chef có một xâu $S$ chỉ chứa $n$ kí tự latinh thường. Anh ấy đã chuẩn bị một danh sách $L$ chứa tất cả các xâu con liên tiếp không rỗng của $S$.

Bây giờ anh ấy có $Q$ câu hỏi. Câu hỏi thứ $i$, bạn cần đếm số cách chọn chính xác $K_i$ xâu bằng nhau từ tập $L$. Kết quả có thể rất lớn nên hãy module cho $10^9+7$

## Input

- Dòng đầu chứa một số nguyên dương $T$ là số bộ test.
- Mỗi bộ test sẽ có định dạng sau:
  - Dòng đầu chứa 2 số nguyên $n, Q$.
  - Dòng 2 chứa xâu $S$.
  - $Q$ dòng tiếp theo, mỗi dòng chứa một số nguyên $K_i$.

## Output

- Với mỗi giá trị $K_i$, in ra kết quả tương ứng trên một dòng mới.

## Constraints

- $1\le T\le 100$
- $1\le N\le 5000$
- $1\le Q\le 10^5$
- $1\le K_i\le 10^9$

## Example

|Input|Output|
|-|-|
|1<br>5 4<br>ababa<br>2<br>1<br>3<br>4|7<br>15<br>1<br>0|
