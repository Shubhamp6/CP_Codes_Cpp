#include <bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
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
        cout << ((n * (n + 1)) % MOD * (4 * n - 1)) % MOD * 337 % MOD << endl;
    }
    return 0;
}