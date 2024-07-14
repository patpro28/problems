#include <bits/stdc++.h>
using namespace std;

#define el '\n'

typedef long long ll;
typedef pair<int, int> ii;

const int N = 1e6 + 12;

int tc;

int p[N + 12];
bool is_prime[N + 12];

void input()
{
  cin >> tc;
}

void prepare_prime()
{
  memset(is_prime, true, sizeof(is_prime));

  is_prime[0] = is_prime[1] = false;

  for (int i = 2; i * i <= N; i++)
    if (is_prime[i])
      for (int j = i * i; j <= N; j += i)
        is_prime[j] = false;
}

void prepare_prime_prime()
{
  int num_prime = 0;

  for (int i = 1; i <= N; i++)
  {
    if (is_prime[i])
      num_prime++;
    p[i] = p[i - 1] + is_prime[num_prime];
  }
}

void process()
{
  prepare_prime();
  prepare_prime_prime();

  while (tc--)
  {
    int l, r;
    cin >> l >> r;
    cout << p[r] - p[l - 1] << el;
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  input();
  process();

  return 0;
}
