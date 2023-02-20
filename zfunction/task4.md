<!-- https://codeforces.com/contest/119/problem/D -->

# Biến đổi xâu

Cho một xâu $s$ độ dài $n$ đánh số từ $0$ đến $n-1$. Với một cặp số nguyên $i,j$ thoả mãn $0\le i<j<n$, chúng ta định nghĩa hàm $f$ như sau:

$$
f(s,i,j)=s[i+1\ldots j-1] + r(s[j\ldots n-1]) + r(s[0\ldots i])
$$

Ở đây $s[p\ldots q]$ là một xâu con liên tiếp của $s$ bắt đầu tại vị trí $p$ và kết thúc tại vị trí $q$. Phép `+` là phép nối xâu. $r(x)$ là một xâu được sinh ra bằng cách viết xâu $x$ theo thứ tự ngược lại. Nếu $j=i+1$ thì xâu con $s[i+1\ldots j-1]$ là xâu rỗng.

Cho 2 xâu $a$ và $b$, tìm một cặp chỉ số $i,j$ sao cho $f(a,i,j)=b$, đồng thời $i$ nhỏ nhất có thể. Nếu cùng chỉ số $i$ có nhiều chỉ số $j$ thoả mãn thì in ra chỉ số $j$ nhỏ nhất.

## Input

- Dòng đầu chứa xâu $a$.
- Dòng 2 chứa xâu $b$.

## Output

- Một dòng chứa 2 chỉ số $i,j$ tìm được hoặc in ra $-1\ -1$ nếu không tồn tại.

## Constraints

- $1\le |a|,|b|\le 10^6$
- Các kí tự trong $a$ và $b$ là các kí tự trong bảng mã ASCII có mã từ 32 đến 126.

## Example

|Input|Output|
|-|-|
|Die Polizei untersucht eine Straftat im IT-Bereich.<br>untersucht eine Straftat.hciereB-TI mi  ieziloP eiD|11 36|
|cbaaaa<br>aaaabc|4 5|
|123342<br>3324212|-1 -1|

```cpp
#include <bits/stdc++.h>
using namespace std;
const int N = 2000010;
char a[N], b[N], c[N];
int n;
int z[N], p[N], nxt[N], d[N];
int main()
{
  gets(a);
  gets(b);
  n = strlen(a);
  if (strlen(b) != n)
  {
    puts("-1 -1");
    return 0;
  }
  int lst = 0, l = 0;
  z[0] = n;
  for (int i = 1; i < n; i++)
  {
    z[i] = lst >= i ? min(lst - i + 1, z[i - l]) : 0;
    while (i + z[i] < n && b[i + z[i]] == b[z[i]])
      z[i]++;
    if (i + z[i] - 1 > lst)
      lst = i + z[i] - 1, l = i;
  }
  lst = -1;
  l = -1;
  for (int i = 0; i < n; i++)
  {
    p[i] = lst >= i ? min(lst - i + 1, z[i - l]) : 0;
    while (i + p[i] < n && a[i + p[i]] == b[p[i]])
      p[i]++;
    if (i + p[i] - 1 > lst)
      lst = i + p[i] - 1, l = i;
  }
  int tot = 0;
  for (int i = n - 1; ~i; i--)
    c[++tot] = a[i];
  c[++tot] = 128;
  for (int i = 0; i < n; i++)
    c[++tot] = b[i];
  nxt[1] = 0;
  for (int i = 2; i <= tot; i++)
  {
    nxt[i] = nxt[i - 1];
    while (nxt[i] && c[i] != c[nxt[i] + 1])
      nxt[i] = nxt[nxt[i]];
    if (c[i] == c[nxt[i] + 1])
      nxt[i]++;
  }
  int x = -1, y = -1;
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] != b[n - i - 1])
      break;
    if (p[i + 1] && i + p[i + 1] + 1 >= n - nxt[n + n - i])
      x = i, y = min(n - nxt[n + n - i], n - 1);
  }
  printf("%d %d\n", x, y);
  return 0;
}
/*
aaaacdaab
aacdbaaaa
aaaa
*/
```
