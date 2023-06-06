#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353

int fact(int n)
{
    if (n == 0)
        return 1;
    return (n * fact(n - 1) % MOD) % MOD;
}

int nCr(int n, int r)
{
    return (fact(n) % MOD / (fact(r) % MOD * fact(n - r) % MOD) % MOD) % MOD;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, k;
    cin >> n >> k;

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m[a]++;
    }

    long long ways = 1;
    for (auto i : m)
        ways = (ways * i.second) % MOD;

    long long selectingQ = nCr(m.size(), k) % MOD;
    cout << (ways * selectingQ) % MOD << endl;

    return 0;
}