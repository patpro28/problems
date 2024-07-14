#include <bits/stdc++.h>

using namespace std;

long long cal(long long n, int k) {
  long long sodau = k;
  long long socuoi = n;
  while ((socuoi + 7) % 7 != k) socuoi--;
  return (socuoi - sodau) / 7 + 1;
}

long long sum(long long n, int k) {
  long long sodau = k;
  long long socuoi = n;
  while ((socuoi + 7) % 7 != k) socuoi--;
  long long ssh = (socuoi - sodau) / 7 + 1;
  return ssh * (sodau + socuoi) / 2;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    long long a, b;
    cin >> a >> b;
    long long ans = 0, S = 0;
    for (int i = 0; i < 4; i++) {
      S += sum(b, 2 * i) - sum(a - 1, 2 * i);
      ans += cal(b, 2 * i) - cal(a - 1, 2 * i);
    }
    cout << ans << ' ' << S << '\n';
  }

  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}