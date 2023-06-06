#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            v[i] = a;
        }

        vector<int> dp(n + 1, 1);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                if (v[i] < v[j])
                    dp[j] = max(dp[j], dp[i] + 1);
            }
        }

        int maxItems = INT_MIN;
        for (int i = 1; i <= n; i++)
            maxItems = max(maxItems, dp[i]);

        cout << maxItems << endl;
    }
    return 0;
}