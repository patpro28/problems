#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    vector<string> a;
    string s;
    cin >> s;
    n = s.size();
    a.push_back(s);
    for (int i = 1; i < n; ++i)
    {
      cin >> s;
      a.push_back(s);
    }
    vector<int> ans(n);
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
        if (i != j and a[i][j] == 'N')
          for (int k = 0; k < n; ++k)
            if (a[i][k] == 'Y' and a[k][j] == 'Y') {
              ans[i]++;
              break;
            }
    int id = max_element(ans.begin(), ans.end()) - ans.begin();
    cout << id << ' ' << ans[id] << '\n';
  }
  return 0;
}