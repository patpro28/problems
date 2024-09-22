#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  int n, k;
  cin >> n >> k;
  long long ans = 0;
  for (int i = 1; pow(i, k - 1) <= n; ++i) {
    ans += n / (int) pow(i, k - 1);
  }

  cout << ans << '\n';

  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}