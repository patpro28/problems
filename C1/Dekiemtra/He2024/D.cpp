#include <bits/stdc++.h>

using namespace std;

const int N = 1e3;
const int mod = 1e9 + 7;

bool prime[N + 1];

void sang() {
  memset(prime, true, sizeof prime);
  prime[0] = prime[1] = false;
  for (int i = 2; i * i <= N; i++) {
    if (prime[i]) {
      for (int j = i * i; j <= N; j += i) {
        prime[j] = false;
      }
    }
  }
}

int legend(int n, int p) {
  int res = 0;
  while (n) {
    res += n / p;
    n /= p;
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  int n;
  cin >> n;
  sang();
  long long res = 1;
  for (int i = 2; i <= n; ++i)
    if (prime[i])
      res = (res * (legend(n, i) + 1)) % mod;
  
  cout << res << '\n';

  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}