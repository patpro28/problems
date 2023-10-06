#include <bits/stdc++.h>

using namespace std;

const int N = 710;
const int dx[] = {0, 0, 1, 1, 1, -1, -1, -1};
const int dy[] = {1, -1, 0, 1, -1, 0, 1, -1};

int n, m;
int h[N][N], vis[N][N], ans = 0;

void bfs(int x, int y) {
  queue<pair<int, int>> q;
  q.push({x, y});
  vis[x][y] = 1;
  bool ok = true;
  while (!q.empty()) {
    auto [u, v] = q.front();
    q.pop();
    for (int i = 0; i < 8; i++) {
      int nx = u + dx[i], ny = v + dy[i];
      if (nx < 1 || nx > n || ny < 1 || ny > m) continue;
      if (h[nx][ny] > h[x][y]) ok = false;
      if (vis[nx][ny] != -1) continue;
      if (h[nx][ny] == h[x][y]) {
        vis[nx][ny] = 1;
        q.push({nx, ny});
      }
    }
  }
  ans += ok;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  cin >> n >> m;
  for (int i = 1; i <= n; i++) 
    for (int j = 1; j <= m; j++) 
      cin >> h[i][j];
  memset(vis, -1, sizeof vis);
  for (int i = 1; i <= n; i++) 
    for (int j = 1; j <= m; j++) 
      if (vis[i][j] == -1) bfs(i, j);
  cout << ans << endl;
  return 0;
}