// LUOGU_RID: 159835110
#include <cstdio>
#define M 1000000007
#define int long long
int n, k, c, q, p[100050], f[100050];
bool v[100050];
int P(int x, int y)
{
    int q = 1;
    for (; y; y >>= 1, x = x * x % M)
        if (y & 1)
            q = q * x % M;
    return q;
}
signed main()
{
    scanf("%lld%lld", &k, &n);
    for (int i = 2; i <= n; ++i)
    {
        if (!v[i])
            p[++c] = i;
        for (int j = 1; i * p[j] <= n; ++j)
        {
            v[i * p[j]] = 1;
            if (!(i % p[j]))
                break;
        }
    }
    for (int i = 1; i <= n; ++i)
        f[i] = P(n / i, k);
    for (int i = 1; i <= c; ++i)
        for (int j = 1; j * p[i] <= n; ++j)
            f[j] = (f[j] + M - f[j * p[i]]) % M;
    for (int i = 1; i <= n; ++i)
        q = (q + i * f[i]) % M;
    return printf("%lld", q), 0;
}