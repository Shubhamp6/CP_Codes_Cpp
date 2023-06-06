#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    vector<vector<int>> dp(1000001,vector<int> (2,0));
    dp[0][0] = dp[0][1] = dp[1][0] = dp[1][1] = 1;
    for (int i = 2; i < 1000001; i++)
    {
        dp[i][0] = (dp[i - 1][0] * 2 % MOD + dp[i - 1][1]) % MOD;
        dp[i][1] = (dp[i - 1][0] + dp[i - 1][1] * 4 % MOD) % MOD;
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << (dp[n][0] + dp[n][1]) % MOD << endl;
    }
    return 0;
}