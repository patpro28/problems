<!-- https://codeforces.com/contest/1203/problem/D2 -->

# Remove the Substring

Bạn được cho hai xâu kí tự $s$ và $t$ chỉ chứa các kí tự latinh in thường. Xâu $t$ có thể được tạo ra từ xâu $s$ bằng cách xoá đi một số (có thể là $0$) kí tự (không cần liên tiếp) từ $s$ mà không thay đổi thứ tự của các kí tự còn lại (hay $t$ là xâu con của $s$).

Bạn cần xoá một xâu con liên tiếp dài nhất của $s$ mà sau khi xoá thì $t$ vẫn là xâu con của $s$.

Nếu bạn muốn xoá xâu $s[l;r]$ thì $s$ sẽ chuyển thành $s_1s_2...s_{l-1}s_{r+1}...s_{|s|-1}s_{|s|}$ với $|s|$ là độ dài xâu $s$.

Nhiệm vụ của bạn là tìm ra xâu dài nhất có thể xoá.

## Input

- Dòng đầu chứa xâu $s$.
- Dòng 2 chứa xâu $t$.

## Output

- In ra một số là độ dài xâu dài nhất có thể xoá.

## Constraints

- $1\le |t|\le |s|\le 10^5$
- $t$ là xâu con của $s$.

## Example

|Input|Output|
|-|-|
|bbaba<br>bb|3|
|baaba<br>ab|2|
|abcde<br>abcde|0|
|asdfasdf<br>fasd|3|

```cpp
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  string s, t;
  cin >> s >> t;
  int j = 0;
  vector<int> f(t.size() + 1, s.size());
  f[0] = -1;
  for (int i = 0; i < s.size(); ++i) {
    if (j < t.size() && s[i] == t[j]) {
      f[++j] = i;
    }
  }
  j = 0;
  int ans = 0;
  for (int i = s.size() - 1; i >= 0; --i) {
    ans = max(ans, i - f[t.size() - j]);
    if (j < t.size() && s[i] == t[t.size() - j - 1]) ++j;
  }
  cout << ans << endl;
}
```
