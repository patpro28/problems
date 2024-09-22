#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;
const int N = 3e5 + 5;

long long gt[N], inv[N];

long long binpow(long long a, long long b) {
  long long res = 1;
  while (b > 0) {
    if (b & 1) {
      res = res * a % mod;
    }

    a = a * a % mod;
    b >>= 1;
  }

  return res;
}

void init() {
  gt[0] = 1;
  for (int i = 1; i < N; ++i) {
    gt[i] = gt[i - 1] * i % mod;
  }

  inv[N - 1] = binpow(gt[N - 1], mod - 2);
  for (int i = N - 2; i >= 0; --i) {
    inv[i] = inv[i + 1] * (i + 1) % mod;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  long long a, b, c;
  cin >> a >> b >> c;
  init();
  long long ans = gt[a + b + c] * inv[a] % mod * inv[b] % mod * inv[c] % mod;

  cout << ans << '\n';

  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}