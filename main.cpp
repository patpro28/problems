#include <bits/stdc++.h>

using namespace std;

using vi = vector<long long>;
using vii = vector<vi>;

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

int mod;

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

ostream& operator <<(ostream &out, Matrix a) {
  auto &u = a.a;
  for(auto &v: u) {
    for(auto &t: v) 
      out << t << " ";
    out << endl;
  }
  return out;
}

int main(int argc, char const *argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  Matrix single(4);
  single.a[0] = {0, 1, 0, 1};
  single.a[1] = {1, 0, 0, 0};
  single.a[2] = {0, 0, -1, 0};
  single.a[3] = {0, 0, 0, 1};
  int t;
  cin >> t;
  while (t--) {
    long long a, n, m;
    cin >> a >> n >> m;
    mod = m;
    a %= mod;
    long long tmp = a * a % mod;
    single.a[0][0] = 4 * tmp % mod;
    single.a[2][0] = 4 * (mod - a) % mod;
    single.a[0][2] = 2 * a % mod;
    single.a[2][2] = mod - 1;
    auto res = binpow(single, n - 1);
    int x = 3;
    cout << (tmp * res.a[0][x] + res.a[1][x] + a * res.a[2][x] + res.a[3][x]) % mod << endl;
  }
  return 0;
}