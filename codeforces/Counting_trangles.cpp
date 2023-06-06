#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        cout << (((n + 1) % MOD + (((n + 1) % MOD * n % MOD) % MOD / 2)) % MOD * (k + 1) % MOD) % MOD << endl;
    }
    return 0;
}