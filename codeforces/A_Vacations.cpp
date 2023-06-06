#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int dp[n + 1][3];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i < n + 1; i++)
    {
        dp[i][0] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
        if (a[i-1] == 1 || a[i-1] == 3)
            dp[i][1] = max(dp[i - 1][0] + 1, dp[i - 1][2] + 1);
        if (a[i-1] == 2 || a[i-1] == 3)
            dp[i][2] = max(dp[i - 1][1] + 1, dp[i-1][0] + 1);
    }

    cout << n - max({dp[n][0], dp[n][1], dp[n][2]}) << endl;

    return 0;
}