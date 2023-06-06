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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> dp(n + 1, 1);
    dp[0] = 1;
    for (int i = 1; i < n + 1; i++)
    {
        if (a[i - 1] == 0)
        {
            int count = 0;
            for (int j = 1; j < m + 1; j++)
            {
                int flag1 = 1, flag2 = 1;
                if (i >= 2)
                {
                    if (abs(j - a[i - 2]) > 1 && a[i - 2] != 0)
                        flag1--;
                }
                if (i <= n - 1)
                {
                    if (abs(j - a[i]) > 1 && a[i] != 0)
                        flag2--;
                }
                if (flag1 && flag2)
                    count++;
            }
            dp[i] = (dp[i - 1]%MOD * count)%MOD;
        }
    }
    cout << dp[n] << endl;

    return 0;
}