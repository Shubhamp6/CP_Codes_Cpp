#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a1(n, 0), a2(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a1[i];

    for (int i = 0; i < n; i++)
        cin >> a2[i];

    int dp[n][3];

    dp[0][0] = a1[0];
    dp[0][1] = a2[0];
    dp[0][2] = 0;
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a1[i];
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + a2[i];
        dp[i][2] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
    }
    cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << endl;

    return 0;
}