<!-- https://codeforces.com/contest/600/problem/E -->

Cho một cây gồm $N$ đỉnh có gốc tại đỉnh $1$. Mỗi đỉnh được tô một màu nào đó.

Một màu $c$ được gọi là màu đại diện của đỉnh cây con gốc $v$ nếu như trong cây con gốc $v$ không có màu khác xuất hiện nhiều lần hơn màu $c$. Mỗi cây con có thể có nhiều màu đại diện.

## Yêu cầu

Với mỗi đỉnh $v$ của cây, hãy tính tổng giá trị của màu đại diện của các cây con gốc $v$.

## Input

- Dòng đầu tiên chứa số nguyên $N$ $(1 \le N \le 10^5)$ - số đỉnh của cây.
- Dòng thứ hai chứa $N$ số nguyên $c_1, c_2, \dots, c_N$ $(1 \le c_i \le 10^5)$ - màu của các đỉnh của cây.
- $N-1$ dòng tiếp theo, mỗi dòng chứa hai số nguyên $u, v$ $(1 \le u, v \le N)$ - biểu thị một cạnh của cây.

## Output

- Gồm $N$ dòng, dòng thứ $i$ chứa một số nguyên - tổng giá trị của màu đại diện của các cây con gốc $i$.

## Example

| Input                             | Output   |
| --------------------------------- | -------- |
| 4<br>1 2 3 4<br>1 2<br>2 3<br>2 4 | 10 9 3 4 |

```cpp
// LUOGU_RID: 107189867
#include <bits/stdc++.h>
#define pc(c) putchar(c)
#define rep(a,b,c) for (int a = (b) ; a < (c) ; ++a)

using namespace std;
using ll = long long ;
using pii = pair<int,int> ;

const int maxn = 2e5 + 10 ;

ll ans[maxn] ;
int color[maxn],cnt[maxn] ;
int h[maxn],nxt[maxn],to[maxn],idx,tot,l[maxn],r[maxn] ;
int hs[maxn],sz[maxn],id[maxn] ;
inline void add(int u,int v){
	nxt[++ idx] = h[u],h[u] = idx,to[idx] = v; 
}
inline void dfs1(int u,int f){
	l[u] = ++ tot ;
	id[tot] = u ;
	sz[u] = 1;

	for (int i = h[u],v = to[i] ; i ; v = to[i = nxt[i]]){
		if (v == f) continue ;
		dfs1(v,u) ;
		sz[u] += sz[v] ;
		if (!hs[u] || sz[hs[u]] < sz[v]) hs[u] = v ;
	}
	r[u] = tot ;
}
int maxx = 0 ;
ll res = 0 ;
inline void dfs2(int u,int f,bool keep){
	for (int i = h[u],v = to[i] ; i ; v = to[i = nxt[i]]) {
		if (v == f || v == hs[u]) continue ;
		dfs2(v,u,false) ;
	}
	if (hs[u]) 
		dfs2(hs[u],u,true) ;
	auto add = [&](int x){
		++ cnt[x] ;
		if (cnt[x] > maxx) maxx = cnt[x],res = x ;
		else if (cnt[x] == maxx) res += x;
	};
	for (int i = h[u],v = to[i] ; i ; v = to[i = nxt[i]]){
		if (v == f || v == hs[u]) continue ;
		rep(j,l[v],r[v] + 1)
			add(color[id[j]]) ;
	}
	add(color[u]) ;
	ans[u] = res ;
	if (!keep){
		rep(i,l[u],r[u] + 1)
			-- cnt[color[id[i]]] ;
		res = maxx = 0 ;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n ;
	cin >> n ;
	rep(i,1,n + 1) cin >> color[i] ;
	int u,v ;
	rep(i,1,n) {
		cin >> u >> v ;
		add(u,v) ;
		add(v,u) ;
	}
	dfs1(1,1) ;
	dfs2(1,1,1) ;
	rep(i,1,n + 1) cout << ans[i] << ' ' ;
	return 0;
}
```