#include <bits/stdc++.h>

using namespace std;

template<typename T>
using vi = vector<T>;
template<typename T>
using vii = vi<vi<T>>;

using u64 = uint64_t;
using u128 = __uint128_t;

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
  vii<u64> a;

  Matrix(int n) : sz(n), a(vii<u64>(n, vi<u64>(n, 0))) {}
};

u64 mod;

Matrix operator*(const Matrix &a, const Matrix &b)
{
  Matrix c(a.sz);
  assert(a.sz == b.sz);
  for (int i = 0; i < a.sz; ++i)
    for (int j = 0; j < a.sz; ++j)
      for (int k = 0; k < a.sz; ++k)
        (c.a[i][j] += (u128) a.a[i][k] * b.a[k][j] % mod) %= mod;
  return c;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  u64 n, m;
  cin >> n >> m;
  mod = m;
  Matrix single(2);
  
  // // Task 1
  // single.a[0] = {1, 1};
  // single.a[1] = {1, 0};

  // // Task 2
  // single.a[0][0] = 2;
  // single.a[1][0] = 1;

  // // Task 3
  // single.a[0][0] = 2;
  // single.a[1][0] = 3;

  // Task 4
  single.a[0] = {3, 1};
  single.a[1] = {2, 0};

  // // Task 5
  // single.a[0][0] = 3;
  // single.a[1][0] = -2;
  // single.a[0][1] = 1;
  // single.a[1][1] = 0;
  if (n <= 1)
    cout << n << '\n';
  else
  {
    auto res = binpow(single, n - 1);
    cout << res.a[0][0] << endl;
  }
  return 0;
}