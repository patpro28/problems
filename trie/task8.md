<!-- https://codeforces.com/contest/1902/problem/E -->

Cho $N$ xâu kí tự latinh thường $s_1,s_2,...,s_N$. Kí hiệu $|X|$ là độ dài của xâu $X$.

Định nghĩa hàm nối mới giữa hai xâu $a$ và $b$ là $C(a, b)$ như sau:

- Nếu $a$ rỗng thì $C(a, b) = b$.
- Nếu $b$ rỗng thì $C(a, b) = a$.
- Nếu kí tự cuối cùng của $a$ bằng kí tự đầu tiên của $b$ thì $C(a, b)=C(a_{1,|a|-1}, b_{2,|b|})$ với $s_{i,j}$ là xâu con của $s$ từ vị trí $i$ đến vị trí $j$.
- Ngược lại thì $C(a, b) = a + b$, tức là nối $a$ và $b$ lại với nhau.

Hãy tính giá trị của biểu thức:

$$\sum_{i=1}^{N} \sum_{j=1}^{N} |C(s_i, s_j)|$$

## Input

- Dòng đầu tiên chứa số nguyên $N$ $(1 \le N \le 10^6)$ — số lượng xâu.
- $N$ dòng tiếp theo, mỗi dòng chứa một xâu $s_i$ $(1 \le |s_i| \le 10^6)$.
- Tổng độ dài của các xâu không vượt quá $10^6$.

## Output

- In ra một số nguyên — giá trị của biểu thức.

## Example

| Input                | Output |
| -------------------- | ------ |
| 3<br>aba<br>ab<br>ba | 20     |

```cpp
#include <bits/stdc++.h>

using namespace std;

// Trie
struct Trie {
  struct Node {
    int cnt;
    Node *child[26];
    Node() {
      cnt = 0;
      for (int i = 0; i < 26; ++i) child[i] = NULL;
    }
  };
  Node *root;
  Trie() { root = new Node(); }
  void insert(string &s) {
    Node *cur = root;
    for (auto &i : s) {
      cur->cnt++;
      int idx = i - 'a';
      if (cur->child[idx] == NULL) cur->child[idx] = new Node();
      cur = cur->child[idx];
    }
    cur->cnt++;
  }
  long long cal(string &s) {
    Node *cur = root;
    long long ans = 0, sum = cur->cnt;
    for (int j = 0; j < s.length(); ++j) {
      char i = s[j];
      int idx = i - 'a';
      if (cur->child[idx] == NULL) {
        ans += sum * j;
        return ans;
      }
      cur = cur->child[idx];
      ans += (sum - cur->cnt) * j;
      sum = cur->cnt;
    }
    return ans + sum * s.length();
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  int n;
  cin >> n;
  Trie trie;
  long long ans = 0, sum = 0;
  vector<string> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    trie.insert(a[i]);
    sum += a[i].length();
  }
  for (int i = 0; i < n; ++i) {
    reverse(a[i].begin(), a[i].end());
    auto x = trie.cal(a[i]);
    ans += x;
  }
  cout << (sum * n - ans) * 2 << '\n';
  return 0;
}
```