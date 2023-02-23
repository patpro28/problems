#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
ll MOD = 1e9 + 7;

vector<ll> z_function(string s)
{
    int n = s.size();
    vl z(n, 0);
    z[0] = n;
    ll l = 0, r = 0;
    for (int i = 1; i < n; i++)
    {
        if (r >= i)
        {
            z[i] = min(r - i + 1, z[i - l]);
        }
        while (z[i] < n - i && s[i + z[i]] == s[z[i]])
            z[i]++;
        if (r < i + z[i] - 1)
        {
            r = z[i] + i - 1;
            l = i;
        }
    }
    return z;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    //     freopen("error.txt", "w", stderr);
    // #endif
    MOD = 1e9 + 7;
    vector<vector<ll>> fact(5000 + 1, vl(5000 + 1, 0));
    for (int i = 0; i <= 5000; i++)
        fact[i][0] = 1;
    for (int i = 1; i <= 5000; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            fact[i][j] = fact[i - 1][j] + fact[i - 1][j - 1];
            if (fact[i][j] >= MOD)
                fact[i][j] -= MOD;
        }
    }

    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        int n, q1;
        cin >> n >> q1;
        string s;
        cin >> s;
        vl cnt(n + 1, 0);
        for (int j = 0; j < n; j++)
        {
            vl ans = z_function(s);
            // cout<<s<<endl;
            s.erase(s.begin());
            // for(auto e: ans)cout<<e<< " ";cout<<endl;
            vl q(n + 1, 0);
            for (auto e : ans)
                q[e]++;
            for (int i = n - 1; i > 0; i--)
            {
                q[i] += q[i + 1];
            }
            for (int i = 1; i <= n; i++)
            {
                cnt[q[i]]++;
            }
            // for( auto e: cnt)cout<<e<<" ";cout<<endl;
        }
        for (int i = 1; i < n; i++)
        {
            cnt[i] -= cnt[i + 1];
        }
        for (auto e : cnt)
            cout << e << " ";
        cout << endl;
        vl sol(n + 1);
        for (int k = 1; k <= n; k++)
        {
            ll ans = 0;
            for (int i = k; i <= n; i++)
            {
                ans += fact[i][k] * cnt[i];
                ans %= MOD;
            }
            sol[k] = ans;
        }
        while (q1--)
        {
            ll k;
            cin >> k;
            if (k <= n)
                cout << sol[k] << endl;
            else
                cout << 0 << endl;
        }
    }
}