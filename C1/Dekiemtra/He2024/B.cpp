#include <bits/stdc++.h>
using namespace std;
bool svv(long long n)
{
  long long s = 0;
  while (n > 0)
  {
    s += n % 10;
    n = n / 10;
  }
  return (s % 2 == 0);
}
//-----------------------------------

const int N = 1e6 + 10;
long long a, b, dem = 0, f[N], t = 1;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> t;
  for (int i = 1; i <= N; i++)
  {
    if (svv(i))
      f[i] = f[i - 1] + 1;
    else
      f[i] = f[i - 1];
  }
  while (t--)
  {
    cin >> a >> b;
    cout << f[b] - f[a - 1] << '\n';
  }
  return 0;
}