<!-- https://csacademy.com/contest/round-42/task/xor-submatrix/statement/ -->

# Xor Submatrix

Cho một dãy số nguyên $U$ độ dài $N$, và một dãy số nguyên $V$ độ dài $M$. Chúng ta xây dựng ma trận $A$ kích thước $N\times M$ với $A_{i,j}=U_i\oplus V_i$

Chúng ta gọi điểm của một ma trận con là tổng XOR của tất cả các phần tử ở trong nó. Tìm ma trận con có điểm lớn nhất.

## Input

- Dòng đầu chứa 2 số nguyên $N$ và $M$.
- Dòng 2 chứa $N$ số nguyên $U_i$.
- Dòng 3 chứa $M$ số nguyên $V_i$.

## Output

- In ra một số là điểm lớn nhất tìm được.

## Constraints

- $1\le N,M\le 1000$.
- $0\le U_i,V_i< 2^{29}$

## Example

|Input|Output|
|-|-|
|3 3<br>10 12 4<br>5 10 9|15|
|3 4<br>5 3 1<br>2 1 2 4|7|

```cpp
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int ar[1005][1005];
int xx[1005][1005];
int a[1005], b[1005];

struct node {
    int en[3];
    node *next[3];
    node() {
        for( int i=0; i<3; i++ ) next[i] = NULL, en[i] = 0;
    }
    void insert( int n, int p )  {
        if( p == -1 ) return;
        int id = n & ( 1 << p ) ? 1 : 0;
        en[id]++;
        if( next[id] == NULL ) next[id] = new node();
        next[id]->insert( n, p-1 );
    }
    void remove( int n, int p )  {
        if( p == -1 ) return;
        int id = n & ( 1 << p ) ? 1 : 0;
        en[id]--;
        if( next[id] == NULL ) return;
        next[id]->remove( n, p-1 );
    }
    int srch( int n, int p )  {
        if( p == -1 ) return 0;
        int id = n & ( 1 << p ) ? 1 : 0;
        if( next[id^1] != NULL && en[id^1] ) return next[id^1]->srch( n, p-1 ) | ( 1 << p );
        if( next[id] != NULL && en[id] ) return next[id]->srch( n, p-1 );
        return 0;
    }
    int srch2( int n, int p )  {
        if( p == -1 ) return 0;
        int id = n & ( 1 << p ) ? 1 : 0;
        if( next[id] != NULL && en[id] ) return next[id]->srch2( n, p-1 );
        if( next[id^1] != NULL && en[id^1] ) return next[id^1]->srch2( n, p-1 ) | ( 1 << p );
        return 0;
    }
    void del() {
        for( int i=0; i<3; i++ ) {
            if( next[i] != NULL ) next[i]->del();
        }
        delete this;
    }
} *root;

int main() {
    int n, m, _xor = 0, h, ans = 0;
    root = new node();
    cin >> n >> m;
    for( int i=1; i<=n; i++ ) cin >> a[i];
    for( int j=1; j<=m; j++ ) cin >> b[j];
    for( int i=1; i<=n; i++ ) {
        for( int j=1; j<=m; j++ ) {
            ar[i][j] = a[i] ^ b[j];
            _xor ^= ar[i][j];
            xx[i][j] = xx[i - 1][j] ^ xx[i][j - 1] ^ xx[i - 1][j - 1] ^ ar[i][j];
            h = _xor ^ ( xx[i - 1][m] ^ xx[0][j] ^ xx[0][m] ^ xx[i - 1][j] );
            ans = max( ans, root->srch( _xor ^ h, 31 ) );
            root->insert( _xor, 31 );
        }
    }
    cout << ans << "\n";
    return 0;
}
```
