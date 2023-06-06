#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000007
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int dp[x + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > i)
                continue;
            dp[i] += ((dp[i - a[j]]) % MAX);
        }
    }
    cout << dp[x] % MAX << endl;

    return 0;
}