#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MAX 1000000007
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            if (i < j)
                break;
            dp[i] += (dp[i - j]%MAX);
        }
    }

    cout << dp[n]%MAX << endl;

    return 0;
}