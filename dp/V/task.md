Cho một cây gồm $N$ đỉnh, đánh số từ $1$ đến $N$.

Thế Anh muốn tô màu các đỉnh của cây với một trong hai màu đen hoặc trắng. Anh ấy sẽ tô làm sao các đỉnh có màu đen phải đến được các đỉnh có màu đen còn lại qua một con đường chỉ gồm các đỉnh màu đen.

Bạn được cho một số nguyên dương $M$. Với mỗi đỉnh $v$, tính số cách tô màu theo quy luật của Thế Anh mà đảm bảo đỉnh $v$ được tô màu đen module $M$.

## Input

- Dòng đầu chứa hai số nguyên dương $N, M$.
- $N - 1$ dòng tiếp theo, mỗi dòng chứa một cặp số nguyên $a$, $b$ cho biết một cạnh nối giữa 2 đỉnh $a$ và $b$.

## Output

- In ra $N$ dòng, dòng thứ $i$ cho biết kết quả của đỉnh $i$ module $M$.

## Constraints

- $1\le N\le 10^5$
- $2\le M\le 10^9$
- $1\le a,b\le N$

## Example
| Input                                                                 | Output                                         |
| --------------------------------------------------------------------- | ---------------------------------------------- |
| 3 100<br>1 2<br>2 3                                                   | 3<br>4<br>3                                    |
| 4 100<br>1 2<br>1 3<br>1 4                                            | 8<br>5<br>5<br>5                               |
| 10 2<br>8 5<br>10 8<br>6 5<br>1 5<br>4 8<br>2 10<br>3 6<br>9 2<br>1 7 | 0<br>0<br>1<br>1<br>1<br>0<br>1<br>0<br>1<br>1 |


