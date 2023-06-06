#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        unordered_map<int, int> mp;
        int minDiff = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            mp[1] = a[i];
            mp[a[i]] = a[i];
            for (int j = 2; j * j < a[i]; j++)
            {
                if (!(a[i] % j))
                {
                    if (j > m)
                        break;
                    mp[j] = a[i];
                    if (a[i] / j <= m)
                        mp[a[i] / j] = a[i];
                }
            }
            if (a[i] == sqrt(a[i]) * sqrt(a[i]) && sqrt(a[i]) <= m)
                mp[sqrt(a[i])] = a[i];
            int minI = INT_MAX, maxI = INT_MIN, flag = 1;
            for (int k = 1; k <= m; k++)
            {
                if (mp[k] == 0)
                {
                    flag = 0;
                    break;
                }
                maxI = max(maxI, mp[k]);
                minI = min(minI, mp[k]);
            }
            if (flag)
                minDiff = min(minDiff, (maxI - minI));
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < factors[i].size(); j++)
        //     {
        //         if(factors[i][j] <= m)
        //         mp[factors[i][j]] = a[i];
        //     }
        // }
        if (minDiff == INT_MAX)
            cout << -1 << endl;
        else
            cout << minDiff << endl;
    }
    return 0;
}