#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int MOD = 1e9 + 7;
    long long sum = (n * (n + 1)) / 2;
    if (sum % 2)
    {
        cout << 0 << "\n";
        return 0;
    }
    vector<vector<long long>> dp(n + 1, vector<long long>(sum / 2 + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i < n + 1; ++i)
    {
        for (int j = 1; j < sum / 2 + 1; ++j)
        {
            if (i <= j)
                dp[i][j] = (dp[i - 1][j - i] + dp[i - 1][j]) % MOD;
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << (dp[n][sum / 2]) << "\n";

    return 0;
}