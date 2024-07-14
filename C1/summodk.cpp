#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    long long n, m, k, last;
    cin >> n >> k >> m;
    int r = n % m;
    if (r == k) last = n;
    else if (r > k) last = n - r + k;
    else last = n - r - (m - k);
    long long first = k;
    if (first > last) {
      cout << 0 << '\n';
      continue;
    }
    // cerr << first << ' ' << last << '\n';
    long long ssh = (last - first) / m + 1;
    long long sum = (first + last) * ssh / 2;
    cout << sum << '\n';
  }
}