<!-- https://codeforces.com/gym/100886/problem/G -->
<!-- Difficult: 2 -->

# Task 4

Tìm một số nguyên trong đoạn $[a,b]$ có tích các chữ số là lớn nhất.

## Input

- Một dòng chứa 2 số nguyên $a, b$.

## Output

- In ra một số bất kỳ có tích các chữ số lớn nhất.

## Constraints

- $1\le a\le b\le 10^{18}$

## Example

|Input|Output|
|-|-|
|1 10|9|
|51 62|59|

## Solution

```cpp
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MAX_LEN = 19;

pair<ll, ll> f[MAX_LEN + 1][2][2];
string a, b;
int n;

pair<ll, ll> cal(int i, int ok1 = false, int ok2 = false, bool zero = true, ll pw = 1e18) {
  if (i == MAX_LEN)
    return {1, 0};
  if (f[i][ok1][ok2].first > 0)
    return f[i][ok1][ok2];
  long long ans = -1, pos = 0;
  int start = ok1 ? 0 : a[i] - '0';
  int finish = ok2 ? 9 : b[i] - '0';
  for(int j = start; j <= finish; ++j) {
    if (j == 0 and zero) {
      auto tmp = cal(i + 1, ok1, ok2 | (b[i] > '0'), true, pw / 10);
      ans = tmp.first;
      pos = tmp.second;
    }
    else {
      auto [tmp, res] = cal(i + 1, ok1 | (a[i] - '0' < j), ok2 | (b[i] - '0' > j), false, pw / 10);
      if (ans < tmp * j) 
        ans = tmp * j, pos = j * pw + res;
    }
  }
  return f[i][ok1][ok2] = {ans, pos};
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  for(int i = 0; i <= MAX_LEN; ++i)
    for(int j = 0; j < 2; ++j)
      f[i][j][0] = f[i][j][1] = {-1, 0};
  cin >> a >> b;
  while (a.length() < MAX_LEN) a = '0' + a;
  while (b.length() < MAX_LEN) b = '0' + b;
  cout << cal(0).second << endl;
  return 0;
}
```