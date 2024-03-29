#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  long long result = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] < a[i - 1]) {
      result += a[i - 1] - a[i];
      a[i] = a[i - 1];
    }
  }
  cout << result << endl;
  return 0;
}