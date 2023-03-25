#include <bits/stdc++.h>

using namespace std;

int n;
long long f[15][13 * 9][13 * 9][2];
string s;

long long cal(int sum, int ok, int m, int i = 0, int mod = 0) {
  if (sum < 0)
    return 0;
  if (i == n)
    return sum == 0 and mod == 0;
  if (f[i][sum][mod][ok] != -1)
    return f[i][sum][mod][ok];
  long long ans = 0;
  for (int j = 0; j <= (ok ? 9 : s[i] - '0'); ++j)
    ans += cal(sum - j, ok | (j < s[i] - '0'), m, i + 1, (mod * 10 + j) % m);
  return f[i][sum][mod][ok] = ans;
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  cin >> s;
  n = s.length();
  long long ans = 0;
  for(int i = 1; i <= 9 * n; ++i) {
    for(int i = 0; i < 15; i++)
      for(int s = 0; s <= 9 * n; ++s)
        for(int k = 0; k < 9 * n; ++k)
          f[i][s][k][0] = f[i][s][k][1] = -1;
    ans += cal(i, 0, i);
  }
  cout << ans << endl;
  return 0;
}