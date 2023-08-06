#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    vector<vector<int>> dp(a + 1, vector<int>(b + 1, 0));

    for (int i = 1; i <= a; ++i)
    {
        for (int j = 1; j <= b; ++j)
        {
            if (i == j)
                dp[i][j] = 0;
            else
            {
                int minCuts = INT_MAX;
                for (int k = 1; k < i; ++k)
                {
                    minCuts = min(minCuts, dp[i - k][j] + dp[k][j]);
                }
                for (int k = 1; k < j; ++k)
                {
                    minCuts = min(minCuts, dp[i][j - k] + dp[i][k]);
                }
                dp[i][j] = minCuts + 1;
            }
        }
    }

    cout << dp[a][b] << "\n";
    return 0;
}