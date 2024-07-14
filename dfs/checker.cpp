#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  ifstream inp(argv[1]), out(argv[2]), ans(argv[3]);
  int a, b;
  inp >> a >> b;
  string s1, s2;
  out >> s1;
  ans >> s2;
  if (s1 != s2) {
    cout << "Wrong Answer\n";
    return 1;
  }
  if (s1 == "NO") return 0;
  int k;
  out >> k;
  long long p[k];
  for (int i = 0; i < k; ++i)
    out >> p[i];
  if (p[0] != a || p[k - 1] != b) {
    cout << "Wrong Answer\n";
    return 1;
  }
  for (int i = 1; i < k; ++i)
    if (p[i] != p[i - 1] * 2 and p[i] != p[i - 1] * 10 + 1) {
      cout << "Wrong Answer\n";
      return 1;
    }
  return 0;
}
