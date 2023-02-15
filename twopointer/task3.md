<!-- https://codeforces.com/contest/1175/problem/C -->

# Task3

Ban được cho $n$ điểm trên trục $Ox$. Bây giờ bạn cần tìm một điểm nguyên $x$ trên trục $Ox$ sao cho hàm $f_k(x)$ là nhỏ nhất có thể.

Hàm $f_k(x)$ được định nghĩa như sau:

- Xây dựng mảng khoảng cách $d_1,d_2,...,d_n$ với $d_i=|a_i-x|$.
- Sắp xếp mảng $d$ theo thứ tự không giảm.
- $f_k(x)=d_{k+1}$.

Nếu có nhiều kết quả, bạn cần in ra số nhỏ nhất tìm được.

## Input

- Dòng đầu chứa một số nguyên dương $T$ tương ứng với số lượng test.
- Mỗi bộ test sẽ có định dạng sau:
  - Dòng đầu chứa hai số nguyên dương $n,k$.
  - Dòng 2 chứa $n$ số nguyên $a_1,a_2,...,a_n$.

## Output

- Với mỗi test in ra kết quả tương ứng trên một dòng mới.

## Constraints

- $1\le T\le 100$
- $1\le n\le 2\cdot 10^5$
- $0\le k<n$
- $1\le a_1<a_2<\cdots<a_n\le 10^9$
- Tổng giá trị $n$ không quá $2\cdot 10^5$

## Example

|Input|Output|
|-|-|
|3<br>3 2<br>1 2 5<br>2 1<br>1 1000000000<br>1 0<br>4|3<br>500000000<br>4|

```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
const int maxN = 2e5 + 100;
int a[maxN];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen("input.txt", "r", stdin);
    int tst;
    cin >> tst;
    while (tst--) {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int x = (int)1e9 + 1000;
        for (int i = 1; i + k <= n; i++) {
            x = min(x, (a[i + k] - a[i] + 1) / 2);
        }
        for (int i = 1; i <= n; i++) {
            if (a[i] + x >= a[i + k] - x) {
                cout << a[i] + x << '\n';
                break;
            }
        }
    }
    return 0;
}
```
