<!-- https://www.spoj.com/problems/SUFEQPRE/ -->
<!-- Difficult: 2 -->

# SUFEQPRE

Cho một xâu $S$ kí tự độ dài $n$ chỉ gồm các kí tự latinh thường. Đếm số lượng **hậu tố chân chính** của xâu $S$ mà đồng thời cũng là tiền tố của $S$. Một hậu tố được gọi là **hậu tố chân chính** nếu nó có độ dài bé hơn độ dài xâu $S$.

## Input

- Dòng đầu chứa một số nguyên dương $T$ là số bộ test.
- $T$ dòng tiếp theo, mỗi dòng chứa một xâu $S$.

## Output

- Gồm $T$ dòng, dòng thứ $i$ in ra theo định dạng ``Case i: ans``, trong đó `i` là chỉ số của test, `ans` là kết quả của test đấy.

## Constraints

- $1\le T\le 50$
- $1\le |S|\le 10^6$
- Tổng độ dài $S$ không quá $3\cdot 10^6$

## Example

|Input|Output|
|-|-|
|3<br>ababab<br>aaaa<br>abcabc|Case 1: 2<br>Case 2: 3<br>Case 3: 1|
