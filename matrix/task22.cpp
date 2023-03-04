#include <bits/stdc++.h>

using namespace std;

using vi = vector<long long>;
using vii = vector<vi>;
const int mod = 1e9 + 7;

template <typename T>
T binpow(T &a, long long n)
{
  if (n == 1)
    return a;
  T ans = binpow(a, n / 2);
  ans = ans * ans;
  if (n & 1)
    ans = ans * a;
  return ans;
}

struct Matrix
{
  int sz;
  vii a;

  Matrix(int n) : sz(n), a(vii(n, vi(n, 0))) {}
};

Matrix operator*(const Matrix &a, const Matrix &b)
{
  Matrix c(a.sz);
  assert(a.sz == b.sz);
  for (int i = 0; i < a.sz; ++i)
    for (int j = 0; j < a.sz; ++j)
      for (int k = 0; k < a.sz; ++k)
        (c.a[i][j] += a.a[i][k] * b.a[k][j]) %= mod;
  return c;
}

void solve() {
  int a, b, c, d;
  long long n;
  cin >> a >> b >> c >> d >> n;
  Matrix single(4);
  single.a[0] = {a * a, c * c, a * c, 0};
  single.a[1] = {b * b, d * d, b * d, 0};
  single.a[2] = {2 * a * b, 2 * c * d, a * d + b * c, 1};
  single.a[3] = {0, 0, 0, 1};
  auto res = binpow(single, n);
  int x = 3;
  cout << (res.a[0][x] + 4 * res.a[1][x] + 2 * res.a[2][x] + 7ll * mod) % mod << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}