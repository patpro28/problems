<!-- https://vjudge.net/problem/LightOJ-1068 -->
<!-- Difficult: 1 -->
# Task 1

Một số nguyên chia hết cho $3$ nếu tổng các chữ số của nó chia hết cho $3$. Ví dụ, $3702$ chia hết cho $3$, đồng thời $12(3+7+0+2)$ cũng chia hết cho $3$. Tính chất này cũng đúng với số $9$.

Trong bài toán này, chúng ta sẽ khám phá tính chất này cho các số nguyên khác.

## Input

- Dòng đầu chứa một số nguyên dương $T$ là số bộ thử.
- $T$ dòng tiếp theo, mỗi dòng chưa $3$ số nguyên $A,B,K$.

## Output

- Với mỗi test, in ra thứ tự bộ thử và số lượng số nguyên trong đoạn $[A,B]$ mà chia hết cho $K$ đồng thời tổng chữ số của nó cũng chia hết cho $K$.

## Constraints

- $1\le A\le B< 2^{31}$.
- $1\le K<10^4$.

## Example

|Input|Output|
|-|-|
|3<br>1 20 1<br>1 20 2<br>1 1000 4|Case 1: 20<br>Case 2: 5<br>Case 3: 64|
