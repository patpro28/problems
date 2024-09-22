#include <bits/stdc++.h>
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) {
        cin >> x;
    }

    int len = sqrt(n) + 1;
    vector<int> block[len];
    for (int i = 0; i < n; i++) {
        block[i / len].push_back(a[i]);
    }
    for (int i = 0; i < len; i++) {
        sort(block[i].begin(), block[i].end());
    }

    cin >> q;
    while (q--) {
        int k;
        cin >> k;
        if (k) {
            int i, x;
            cin >> i >> x;
            --i;
            int id = i / len;
            auto it = lower_bound(block[id].begin(), block[id].end(), a[i]);
            if (a[i] > x) {
                *it = x;
                while (it != block[id].begin() && *it < *(it - 1)) {
                    swap(*it, *(it - 1));
                    --it;
                }
            } else {
                *it = x;
                while (it != block[id].end() - 1 && *it > *(it + 1)) {
                    swap(*it, *(it + 1));
                    ++it;
                }
            }
            a[i] = x;
        } else {
            int l, r, x;
            cin >> l >> r >> x;
            --l, --r;
            int ans = 0;
            for (int i = l; i <= r;) {
                if (i % len == 0 && i + len - 1 <= r) {
                    int id = i / len;
                    auto it = lower_bound(block[id].begin(), block[id].end(), x);
                    ans += block[id].end() - it;
                    i += len;
                } else {
                    if (a[i] >= x) {
                        ++ans;
                    }
                    ++i;
                }
            }
            cout << ans << '\n';
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}