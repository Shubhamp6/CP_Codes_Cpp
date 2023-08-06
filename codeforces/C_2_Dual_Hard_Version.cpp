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
        // cout << n << "\n";
        vector<int> v(n, 0);
        int maxEle = INT_MIN, minInd = -1, maxInd = -1, minEle = INT_MAX, positiveCount = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] >= 0)
                ++positiveCount;
            if (maxEle < v[i])
            {
                maxEle = v[i];
                maxInd = i;
            }
            if (minEle > v[i])
            {
                minEle = v[i];
                minInd = i;
            }
        }
        if (minEle == maxEle)
        {
            cout << 0 << "\n";
            continue;
        }
        vector<pair<int, int>> ans;
        if (maxEle > 0 && positiveCount > n - positiveCount)
        {
            while (v[0] < 0)
            {
                ans.push_back({0, maxInd});
                v[0] = maxEle + v[0];
            }
            maxEle = v[0];
            while (maxEle <= 50)
            {
                maxEle += maxEle;
                ans.push_back({0, 0});
            }
            v[0] = maxEle;

            for (int i = 1; i < n; i++)
            {
                while (v[i - 1] >= v[i])
                {
                    v[i] += v[i - 1];
                    ans.push_back({i, i - 1});
                }
            }
        }
        else
        {
            while (v[n - 1] >= 0)
            {
                ans.push_back({n - 1, minInd});
                v[n - 1] += minEle;
            }
            minEle = v[n - 1];
            while (minEle >= -50)
            {
                minEle += minEle;
                ans.push_back({n - 1, n - 1});
            }
            v[n - 1] = minEle;

            for (int i = n - 2; i >= 0; --i)
            {
                // if (i == n - 2)
                //     cout << v[i + 1] << "\n";
                while (v[i + 1] <= v[i])
                {
                    v[i] += v[i + 1];
                    ans.push_back({i, i + 1});
                }
            }
        }
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); ++i)
            cout << ans[i].first + 1 << " " << ans[i].second + 1 << "\n";
    }
    return 0;
}