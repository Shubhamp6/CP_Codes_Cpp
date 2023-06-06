#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000007
//#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    //sort(a, a + n);
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    // for (int i = 1; i <= x; i++)
    // {
    //     dp[0][i] = 0;
    // }
    // for (int i = 0; i <= n; i++)
    // {
    //     dp[i][0] = 1;
    // }

    dp[0][0] = 1;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < x + 1; j++)
        {
            if (a[i - 1] <= j)
                dp[i][j] = (dp[i][j - a[i - 1]] + dp[i - 1][j])%MAX;
            else
                dp[i][j] = dp[i - 1][j]%MAX;
        }
    }

    cout << dp[n][x]%MAX << endl;

    return 0;
}