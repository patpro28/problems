#include <bits/stdc++.h>
#define DB(x) #x << " = " << x << "; "

using namespace std;

const int mod = 1e9 + 7;

int binpow(int a, int n) {
  int res = 1;
  while (n) {
    if (n & 1) {
      res = (1LL * res * a) % mod;
    }
    a = (1LL * a * a) % mod;
    n >>= 1;
  }
  return res;
}

long long fact(int n) {
  int res = 1;
  for (int i = 1; i <= n; i++) {
    res = (1LL * res * i) % mod;
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  
  int n, m;
  cin >> n >> m;

  int k = n - m * 2;
  if (k < 0) {
    cout << 0 << '\n';
  } else {
    cout << fact(k + m - 1) * fact(n) % mod * binpow(fact(k), mod - 2) % mod << '\n';
  }

  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}