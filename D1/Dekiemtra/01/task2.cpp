#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) 
    cin >> a[i];
  long long result = 0;
  stack<int> st;
  long long ans = 0;
  for (auto &u: a) {
    ans += st.size();
    while (!st.empty() && st.top() < u) {
      st.pop();
    }
    st.push(u);
  }
  cout << ans << endl;
  return 0;
}