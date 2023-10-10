<!-- https://codeforces.com/contest/321/problem/E -->

Công viên trung tâm vừa ra mắt trò chơi Vòng đu quay. Hôm nay Thế Anh đứng ở trong hàng đợi phía trước vòng đu quay. Có $n$ người đang chờ trong hàng đợi: người đầu tiên đứng ở đầu hàng đợi, người thứ $n$ đứng ở cuối hàng đợi.

Vòng đu quay có $k$ buồng, mỗi buồng không giới hạn số người, chúng ta sẽ phân bố vào từng buồng như sau:

- Khi buồng đầu tiên đên, $q_1$ người đầu tiên trong hàng đợi sẽ vào buồng đó.
- Khi buồng thứ hai đến, $q_2$ người tiếp theo trong hàng đợi sẽ vào buồng đó.
- ....
- Khi buồng thứ $k$ đến, $q_k$ người cuối cùng trong hàng đợi sẽ vào buồng đó.

Chú ý rằng $q_1,q_2,...,q_k$ phải dương, đồng thời $q_1 + q_2 + ... + q_k = n$.

Bạn biết rằng, một số người sẽ không muốn ở chung với người lạ tại trong một buồng, do đó nhiệm vụ của bạn là tìm cách phân bố $n$ người vào $k$ buồng sao cho họ hạnh phúc nhất. Với mọi cặp người $i$ và $j$, tồn tại một giá trị $u_{ij}$ mô tả mức độ không thân thiện giữa hai người. Bạn có thể chắc chắn rằng $u_{ij} = u_{ji}$ với mọi $i$ và $j$, đồng thời $u_{ii} = 0$ với mọi $i$. Độ không thân thiện của một buồng bằng tổng mức độ không thân thiện giữa tất cả các cặp người trong buồng đó. 

Độ không thân thiện của cách phân bố bằng tổng độ không thân thiện của tất cả các buồng. Hãy giúp nhân viên công viên tìm cách phân bố sao cho độ không thân thiện là nhỏ nhất.

## Input

- Dòng đầu tiên chứa hai số nguyên $n$ và $k$.
- $n$ dòng tiếp theo, mỗi dòng chứa $n$ số nguyên $u_{ij}$.

## Output

- In ra một số nguyên duy nhất là độ không thân thiện nhỏ nhất có thể đạt được.

## Constraints

- $1 \le n \le 4000$
- $1 \le k \le \min{(n, 800)}$
- $0 \le u_{ij} \le 9$ với mọi $i$ và $j$.

## Example 

| Input                                                                                                                                                                       | Output |
| --------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------ |
| 5 2 <br> 0 0 1 1 1 <br> 0 0 1 1 1 <br> 1 1 0 0 0 <br> 1 1 0 0 0 <br> 1 1 0 0 0                                                                                              | 0      |
| 8 3 <br> 0 1 1 1 1 1 1 1 <br> 1 0 1 1 1 1 1 1 <br> 1 1 0 1 1 1 1 1 <br> 1 1 1 0 1 1 1 1 <br> 1 1 1 1 0 1 1 1 <br> 1 1 1 1 1 0 1 1 <br> 1 1 1 1 1 1 0 1 <br> 1 1 1 1 1 1 1 0 | 7      |
| 3 2 <br> 0 2 0 <br> 2 0 3 <br> 0 3 0                                                                                                                                        | 2      |
