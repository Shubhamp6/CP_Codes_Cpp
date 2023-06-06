#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    int dp[k + 1][n + 1];
    memset(dp,0,sizeof(dp));

    for (int i = 0; i <= n; i++)
        dp[1][i] = 1;

    for (int i = 2; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int l = j; l <= n; l += j)
                dp[i][l] = (dp[i][l] + dp[i - 1][j]) % MOD;
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = (ans + dp[k][i]) % MOD;
    }
    cout << ans << endl;

    return 0;
}