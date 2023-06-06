#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 998244353
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return (n * fact(n - 1)%MOD);
}

int ncr(int n, int r)
{
    if (n < 0)
        return 0;
    return (fact(n) / (fact(n - r)  * fact(r)));
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a, total;
        // cout << 1 << endl;
        total = ncr(n, n / 2) % MOD;
        a = ncr(n - 1, (n / 2 - 1)) % MOD;
        int i = 3;
        while ((n / 2) - i > 0)
        {
            a += ncr(n - i, n / 2 - i) % MOD;
            i++;
        }
        cout << ncr(60, 30) << endl;
        cout << a << " " << (total - 1 - a) % MOD << " " << 1 << endl;
    }
    return 0;
}