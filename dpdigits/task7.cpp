#include <bits/stdc++.h>
using namespace std;

int dp[12][2][50][50]; // {idx, tight, odd, even}

int digit_dp(string ss)
{
  int n = ss.size();

  // empty suffixes having sum=0
  dp[n][0][0][0] = 1;
  dp[n][1][0][0] = 1;

  for (int i = n - 1; i >= 0; i--)
  {
    for (int tight = 0; tight < 2; tight++)
    {
      for (int odd = 0; odd < 50; odd++)
      {
        for (int even = 0; even < 50; even++)
        {
          if ((n - i) % 2)
          {
            if (tight)
            {
              for (int d = 0; d <= ss[i] - '0'; d++)
              {
                dp[i][1][odd][even] += (d == ss[i] - '0') ? dp[i + 1][1][odd - d][even] : dp[i + 1][0][odd - d][even];
              }
            }
            else
            {
              for (int d = 0; d < 10; d++)
              {
                dp[i][0][odd][even] += dp[i + 1][0][odd - d][even];
              }
            }
          }
          else
          {
            if (tight)
            {
              for (int d = 0; d <= ss[i] - '0'; d++)
              {
                dp[i][1][odd][even] += (d == ss[i] - '0') ? dp[i + 1][1][odd][even - d] : dp[i + 1][0][odd][even - d];
              }
            }
            else
            {
              for (int d = 0; d < 10; d++)
              {
                dp[i][0][odd][even] += dp[i + 1][0][odd][even - d];
              }
            }
          }
        }
      }
    }
  }
  int ans = 0;
  for (int o = 0; o < 50; o++)
  {
    for (int e = 0; e < 50; e++)
    {
      if (e - o == 1)
        ans += dp[0][1][o][e];
    }
  }
  return ans;
}

void reset_dp()
{
  for (int i = 0; i < 12; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      for (int k = 0; k < 50; k++)
      {
        for (int l = 0; l < 50; l++)
        {
          dp[i][j][k][l] = 0;
        }
      }
    }
  }
}

void purple()
{
  int a, b;
  cin >> a >> b;
  int countA = digit_dp(to_string(a - 1));
  reset_dp();
  int countB = digit_dp(to_string(b));
  reset_dp();
  cout << countB - countA << endl;
}

signed main()
{
  int t = 1;
  cin >> t;
  while (t--)
    purple();
}