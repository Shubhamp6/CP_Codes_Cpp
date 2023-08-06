#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> a(n,0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i < m + 1; ++i)
    {
        if (a[0] == 0 || a[0] == i)
            dp[0][i] = 1;
        else
            dp[0][i] = 0;
    }
    for (int i = 1; i < n + 1; ++i)
    {
        for (int j = 1; j < m + 1; ++j)
        {
            if (a[i] != 0 && a[i] != j)
                dp[i][j] = 0;
            else
            {
                dp[i][j] = dp[i - 1][j]%MOD;
                dp[i][j] = (dp[i][j]%MOD + dp[i - 1][j - 1]%MOD)%MOD;
                if(j < m)
                dp[i][j] = (dp[i][j]%MOD + dp[i - 1][j + 1]%MOD)%MOD;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i < m + 1; ++i)
    {
        ans =  (ans + dp[n - 1][i])%MOD;
    }
    cout << ans << "\n";
    return 0;
}