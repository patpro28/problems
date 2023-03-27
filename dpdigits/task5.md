Cho một tập $S$ của các chữ số và một số $n$. Bạn cần đếm số lượng số tự nhiên có $n$ chữ số mà chỉ bao gồm các chữ số trong tập $S$ và chênh lệch giữa hai chữ số kề nhau không vượt quá $2$.

## Input

- Dòng đầu chứa một số nguyên dương $T$ là số bộ test.
- Mỗi test có định dạng như sau:
    - Dòng đầu chứa 2 số nguyên dương $m, n$.
    - Dòng hai chứa $m$ chữ số phân biệt từ $1$ đến $9$ mô tả tập $S$. Các chữ số được viết theo thứ tự tăng dần.

## Output

- Với mỗi test in ra thứ tự test và số lượng số tìm được.

## Constraints

- $1\le T\le 300$.
- $1\le m\le 9$
- $1\le n\le 18$.

## Example 

|Input|Output|
|-|-|
|3<br>3 2<br>1 3 6<br>3 2<br>1 2 3<br>3 3<br>1 4 6|Case 1: 5<br>Case 2: 9<br>Case 3: 9|


## Solution

```cpp
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
template<typename T>
using vt = vector<T>;

const int N = 20;

int n, m;

vt<int> d;
vt<vt<ll>> f;

ll cal(int pos, int last) {
  if (pos == n)
    return 1;
  if (f[pos][last] != -1)
    return f[pos][last];
  ll ans = 0;
  for(auto &u: d)
    if (abs(u - last) <= 2)
      ans += cal(pos + 1, u);
  return f[pos][last] = ans;
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  int t;
  cin >> t;
  for(int i = 0; i < t; ++i) {
    f.assign(N, vt<ll>(N, -1));
    cout << "Case " << i + 1 << ": ";
    cin >> m >> n;
    d.resize(m);
    for(auto &u: d) cin >> u;
    ll ans = 0;
    for(auto &u: d) 
      ans += cal(1, u);
    cout << ans << endl; 
  }
  return 0;
}
```