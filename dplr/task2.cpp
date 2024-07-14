#include <iostream>

using namespace std;

const int MAX = 1010;
int h[MAX], l[MAX], dp[MAX];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  int m, n, x;
  cin >> m >> n;
  long long res = 0;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> x;
      h[j] = x ? h[j] + 1 : 0;
    }
    for (int j = 0; j < n; ++j) {
      l[j] = j - 1;
      while (l[j] >= 0 and h[l[j]] >= h[j])
        l[j] = l[l[j]];
      dp[j] = h[j] * (j - l[j]) + (l[j] >= 0 ? dp[l[j]] : 0);
      res += dp[j];
    }
  }
  cout << res << endl;
  return 0;
}