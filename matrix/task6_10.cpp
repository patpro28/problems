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

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  int n;
  Matrix single(3);
  
  // // Task 6
  // single.a = {
  //   {1, 1, 0},
  //   {1, 0, 1},
  //   {1, 0, 0}
  // };

  // // Task 7
  // single.a[0][0] = 2;
  // single.a[1][0] = 1;
  // single.a[2][0] = 2;

  // // Task 8
  // single.a[0][0] = 2;
  // single.a[1][0] = 3;
  // single.a[2][0] = 1;

  // // Task 9
  // single.a = {
  //   {3, 1, 0},
  //   {2, 0, 1},
  //   {5, 0, 0}
  // };

  // Task 10
  single.a = {
    {       3, 1, 0},
    { mod - 2, 0, 1},
    {       3, 0, 0}
  };
  int t;
  cin >> t;
  while (t--) {
    cin >> n;
    if (n <= 1)
      cout << n << '\n';
    else
    {
      auto res = binpow(single, n - 1);
      cout << res.a[0][0] << endl;
    }
  }
  return 0;
}