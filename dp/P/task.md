Cho một cây gồm $N$ đỉnh, đánh số từ $1$ đến $N$. Cạnh thứ $i$ nối giữa hai đỉnh $x_i$ và $y_i$.

Taro quyết định tô màu mỗi đỉnh trên cây bằng một trong hai màu đen và trắng. Không cho phép hai đỉnh kề nhau trên cây có chung màu đen.

Tìm số cách tô màu các đỉnh (tất cả các đỉnh phải được tô 1 trong hai màu) thỏa mãn yêu cầu trên, module $10^9+7$.

## Input

- Dòng đầu chứa một số nguyên dương $N$.
- $N-1$ dòng tiếp theo, mỗi dòng chứa hai số nguyên $x$ và $y$.

## Output

- Một số nguyên duy nhất là số cách tô màu các đỉnh thỏa mãn yêu cầu trên, module $10^9+7$.

## Example

| Input                                                               | Output |
| ------------------------------------------------------------------- | ------ |
| 3<br>1 2<br>2 3                                                     | 5      |
| 4<br>1 2<br>1 3<br>1 4                                              | 9      |
| 10<br>8 5<br>10 8<br>6 5<br>1 5<br>4 8<br>2 10<br>3 6<br>9 2<br>1 7 | 157    |
