#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int dp[4][n + 1];
    memset(dp,0,sizeof(dp));

    for (int i = 1; i <= n; i++)
        dp[0][i] = INT_MIN;
    for (int i = 0; i <= 4; i++)
        dp[i][0] = 0;

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (a[i - 1] <= j)
                dp[i][j] = max(dp[i][j - a[i - 1]] + 1, dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[3][n] << endl;
    return 0;
}