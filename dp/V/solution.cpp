#include <bits/stdc++.h>

using namespace std;

const int N = 100000 + 10;

vector<int> G[N];
int down[N], up[N];
int n, m;

void dfs1(int u, int p)
{
  down[u] = 1;
  for (auto v : G[u])
  {
    if (v == p)
      continue;
    dfs1(v, u);
    down[u] = 1LL * down[u] * (down[v] + 1) % m;
  }
}

void dfs2(int u, int p)
{
  int t = up[u] + 1;
  for (auto v : G[u])
  {
    if (v == p)
      continue;
    up[v] = t;
    t = 1LL * t * (down[v] + 1) % m;
  }
  reverse(G[u].begin(), G[u].end());
  t = 1;
  for (auto v : G[u])
  {
    if (v == p)
      continue;
    up[v] = 1LL * up[v] * t % m;
    t = 1LL * t * (down[v] + 1) % m;
  }
  reverse(G[u].begin(), G[u].end());
  for (auto v : G[u])
  {
    if (v == p)
      continue;
    dfs2(v, u);
  }
}

int main()
{
  int u, v;
  cin >> n >> m;
  for (int i = 0; i < n - 1; i++)
  {
    cin >> u >> v;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  dfs1(1, -1);
  dfs2(1, -1);
  for (int i = 1; i <= n; i++)
    cout << 1LL * (up[i] + 1) * down[i] % m << endl;
  return 0;
}