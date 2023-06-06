#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int d, sumTime;
    cin >> d >> sumTime;
    vector<pair<int, int>> v;
    vector<int> ans;
    int minSum = 0, maxSum = 0;
    for (int i = 0; i < d; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
        minSum += a;
        maxSum += b;
        ans.push_back(a);
    }
    if (sumTime < minSum || sumTime > maxSum)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        sumTime -= minSum;
        for (int i = 0; i < d; i++)
        {
            if (v[i].second - v[i].first >= sumTime)
            {
                ans[i] += sumTime;
                break;
            }
            else
            {
                ans[i] = v[i].second;
                sumTime -= (v[i].second - v[i].first);
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}