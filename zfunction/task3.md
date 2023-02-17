<!-- https://codeforces.com/problemset/problem/126/B -->
<!-- Difficult: 3 -->

# Password

Thế Anh, Khải, Hồng và Hưng đang thực hiện một chuyến thám hiểm kim tự tháp. Tuy nhiên cửa của nó đã bị khoá, nó yêu cầu mật mã nhưng 4 người không có ai biết.

Sau một thời gian tìm kiếm xung quanh, họ đã tìm thấy được một chuỗi kí tự latinh in thường $S$, được chạm khắc ở một góc tối trên trần nhà. Thế Anh cho rằng mật khẩu sẽ là $S$, tuy nhiên sau khi nhập vào cửa vẫn không mở. Sau đó, Thế Anh cho rằng mật khẩu sẽ là một chuỗi con liên tiếp $T$ của $S$.

Khải cho rằng mật khẩu phải là một tiền tố của $S$, Hồng cho rằng nó phải là một hậu tố của $S$ nhưng Hưng lại cho rằng nó phải là một xâu nằm bên trong $S$ vừa không phải tiền tố, vừa không phải hậu tố.

Thấy 3 người bạn cãi nhau, Thế Anh quyết định chọn một chuỗi $T$ mà thoả mãn được cả 3 điều kiện trên. Bên cạnh đó, từ tất cả các chuỗi $T$ thoả mãn, Thế Anh muốn lấy ra chuỗi dài nhât. Khi Thế Anh tìm được chuỗi đấy và nhập vào, cánh của lập tức mở ra.

Bạn được biết chuỗi $S$. Tìm xem xâu $T$ thoả mãn hoặc là xác định rằng không có chuỗi con nào thoả mãn và cả câu chuyện phía trên chỉ là một truyền thuyết.

## Input

- Một dòng chứa xâu $S$.

## Output

- In ra xâu $T$ tìm được hoặc in ra ``Just a legend`` nếu không tôn tại.

## Constraints

- $1\le |S|\le 10^6$

## Example

|Input|Output|
|-|-|
|fixprefixsuffix|fix|
|abcdabc|Just a legend|

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int p[n + 1] = {-1}, x = 0;
    for (int i = 0, j = -1; i < n; p[++i] = ++j)
        while (~j && s[i] != s[j])
            j = p[j];
    for (int i = 1; i < n; i++)
    {
        if (p[i] == p[n] || p[i] == p[p[n]])
            x = max(x, p[i]);
    }
    cout << (x ? s.substr(0, x) : "Just a legend");
}
```
