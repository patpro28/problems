# SHHV

Xét tất cả các hoán vị của dãy số tự nhiên $(1,2,...,n)$. Giả sử tất cả hoán vị được sắp xếp theo thứ tự từ điển và đánh số hiệu tăng dần từ $1$.

Yêu cầu:

- Cho trước một hoán vị, tìm số hiệu của hoán vị đây.
- Cho trước một số hiệu của một dãy hoán vị. Tìm hoán vị đó.

## Input

- Dòng đấu chứa một số nguyên dương $n$.
- Dòng hai chứa $n$ số nguyên mô tả một hoán vị.
- Dòng ba chứa một số nguyên $K$ mô tả số hiệu của một hoán vị nào đó.

## Output

- Dòng đầu chứa một số nguyên cho biết số hiệu của hoán vị đã cho.
- Dòng 2 chứa $n$ số nguyên cho biết hoán vị thứ $K$.

## Constraints

- $1\le n\le 19$.
- $1\le K\le n!$.

## Example

|Input|Output|
|-|-|
|3<br>2 1 3<br>4|3<br>2 3 1|

## Solution

```cpp
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(int argc, char const *argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);

  int n;
  ll k;
  cin >> n;

  vector<int> a(n), p;

  for (auto &x : a)
    cin >> x;

  cin >> k;

  p.push_back(1);
  for (int i = 1; i <= n; ++i)
    p.push_back(p.back() * i);

  int ans = 0;
  for (int i = 0; i < n; ++i)
  {
    int k = a[i] - 1;
    for (int j = 0; j < i; ++j)
      if (a[j] < a[i])
        --k;
    ans += k * p[n - i - 1];
  }

  --k;

  vector<int> b, d(n, 1);

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
      if (k >= p[n - i - 1])
        k -= d[j] * p[n - i - 1];
      else if (d[j])
      {
        b.push_back(j + 1);
        d[j] = 0;
        break;
      }
  }

  cout << ans + 1 << endl;
  for (auto x : b)
    cout << x << " ";
  return 0;
}
```
