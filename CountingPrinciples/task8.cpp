#include <bits/stdc++.h>
#define DB(x) #x << " = " << x << "; "

using namespace std;

const int N = 205;
const int mod = 2024;

int c[N][N];

void initCombinations() {
  for (int i = 0; i < N; i++) {
    c[i][0] = 1;
    for (int j = 1; j <= i; j++) {
      c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % mod;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  initCombinations();
  int t;
  cin >> t;
  while (t--) {
    int n, k, x;
    cin >> n >> k;
    n -= k - 1;
    for (int i = 0; i < k; ++i) {
      cin >> x;
      n -= x;
    }
    cout << c[n + k][k] << '\n';
  }

  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}