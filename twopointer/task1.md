<!-- https://www.spoj.com/problems/ADAFENCE/ -->

Ada có một vùng đất hình tròn. Cô ấy muốn rào quanh nó bằng các hàng rào. Tuy nhiên không có ai bán ván cong, cho nên cô ấy quyết định rào nó bằng một đa giác đều $k$ cạnh. Vấn đề là, chỉ có các vị trí đặt cọc sẵn mới được sử dụng làm đỉnh của đa giác để xây dựng. Ada muốn hỏi bạn xem có bao nhiêu hàng rào hình đa giác đều $k$ cạnh khác nhau có thể được xây trên mảnh đất của cô (Hai đa giác được coi là khác nhau nếu chúng không dùng chung trụ cột)

## Input
- Dòng đầu chứa một số nguyên dương $T$ là số bộ test.
- Mỗi bộ test sẽ có định dạng như sau:
    - Dòng đầu chứa hai số nguyên dương $n$ và $k$ tương ứng là số lượng các cọc có sẵn và số cạnh của đa giác đều.
    - Dòng 2 chứa $n$ số nguyên $D_i$ cho biết khoảng cách giữa 2 cọc liên tiếp trên đường tròn. Tổng độ dài sẽ chia hết cho $k$.

## Output
- Với mỗi test, in ra kết quả tương ứng trên một dòng mới.

## Constraints
- $3\le k\le n\le 10^5$
- $3\le k\le 100$
- $1\le D_i\le 100$
- Tổng giá trị $n$ trong cả bộ test không vượt quá $10^6$

## Example
| Input                                                                                         | Output      |
| --------------------------------------------------------------------------------------------- | ----------- |
| 3<br>5 3<br>1 2 3 2 1<br>15 4<br>1 2 2 2 1 2 2 1 1 2 1 2 1 2 2<br>10 5<br>1 1 1 1 1 1 1 1 1 1 | 1<br>1<br>2 |

```cpp
#include <bits/stdc++.h>
using namespace std;

int flag[10000010];
int D[100010];

int main() {
   int T, N, K, req, sum1, sum2, ans;
   scanf("%d", &T);
   for (int t = 1; t <= T; t++) {
      scanf("%d %d", &N, &K);
      sum1 = 0;
      for (int i = 0; i < N; i++)
         scanf("%d", &D[i]), sum1 += D[i];
      req = sum1 / K;
      ans = sum2 = 0;
      for (int i = 0; i < N; i++) {
         if (sum2 < req)
            flag[sum2] = t;
         else
            flag[sum2] = flag[sum2 - req];
         if (sum2 + req >= sum1 && flag[(sum2 + req) % sum1] == t)
            ans += (flag[sum2] == t);
         sum2 += D[i];
      }
      printf("%d\n", ans);
   }
   return 0;
}
```