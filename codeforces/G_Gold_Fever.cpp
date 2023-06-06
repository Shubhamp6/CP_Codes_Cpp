#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;

    vector<pair<int, pair<int, int>>> p;
    for (int i = 0; i < n; i++)
    {
        int g, a, b;
        cin >> g >> a >> b;
        p.push_back({g, {a, b}});
    }

    vector<int> dp(n, 0);
    vector<int> index(n, n - 1);
    for (int i = n - 1; i >= 0; i--)
    {
        if (i + p[i].second.first < n)
        {
            int maxDp = INT_MIN, j = i + p[i].second.first, maxPos = index[j];
            while (j <= maxPos && j < n && j <= i + p[i].second.second)
            {
                if (maxDp < dp[j])
                {
                    maxDp = dp[j];
                    index[i] = j;
                    maxPos = min(maxPos, index[j]);
                }
                // maxDp = max(maxDp, dp[j]);
                j++;
            }
            dp[i] = maxDp + p[i].first;
        }
        else
        {
            dp[i] = p[i].first;
        }
    }

    int maxGold = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxGold = max(maxGold, dp[i]);
    }

    cout << maxGold << endl;

    return 0;
}