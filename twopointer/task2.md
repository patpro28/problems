<!-- https://www.spoj.com/problems/ADAPLANT/ -->

Ada đã trồng rất nhiều cây trong vườn của mình. Cô ấy đang cố gẵng trồng các loại cây với kích thước tương đương. Các cây được trồng thẳng hàng và có chiều cao được đại diện bởi một mảng $h_1,h_2,...,h_n$. Bây giờ cô ấy đang muốn khảo sát về chênh lệch chiều cao lớn nhất giữa các cặp cây kề nhau. Một cặp cây được cho là kề nhau nếu ở giữa chúng có nhiều nhất là $k$ cây khác.

## Input
- Dòng đầu chứa một số nguyên dương T là số bộ test.
- Mỗi bộ test được mô tả như sau:
    - Dòng đầu chứa 2 số nguyên dương $n$ và $k$.
    - Dòng 2 chứa $n$ số nguyên $h_i$.

## Output
- Với mỗi test in ra kết quả trên một dòng mới.

## Constraints
- $2\le n\le 10^5$
- $0\le k\le 10^5$
- $0\le h_i\le 10^9$
- Tổng giá trị $n$ trong tất cả test không vượt quá $3\times 10^6$

## Example
| Input                                                                       | Output       |
| --------------------------------------------------------------------------- | ------------ |
| 3<br>5 0<br>1 2 3 5 6<br>4 6<br>1 10 2 9<br>10 1<br>1 7 8 9 19 11 21 8 11 0 | 2<br>9<br>13 |


```cpp
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;

int A[200010];

int main() {
   int T, N, K;
   int l, r;
   int ans;
   scanf("%d", &T);
   while (T--) {
      scanf("%d %d", &N, &K);
      K++;
      priority_queue<ii, vector<ii>, greater<ii>> Q1;
      priority_queue<ii, vector<ii>> Q2;
      for (int i = 0; i < N; i++)
         scanf("%d", &A[i]);
      l = 0;
      r = min(N - 1, K);
      for (int i = 0; i <= r; i++)
         Q1.push(ii(A[i], i)), Q2.push(ii(A[i], i));
      ans = 0;
      while (l < N) {
         while (Q1.top().second <= l - K - 1)
            Q1.pop();
         while (Q2.top().second <= l - K - 1)
            Q2.pop();
         ans = max(ans, max(Q2.top().first - A[l], A[l] - Q1.top().first));
         l++;
         if (r < N - 1) {
            r++;
            Q1.push(ii(A[r], r)), Q2.push(ii(A[r], r));
         }
      }
      printf("%d\n", ans);
   }
   return 0;
}
```