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
        int a[n];
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int p, c;
            cin >> p >> c;
            v.push_back({p, c});
        }
        int flag = 1;
        if (v[0].first < v[0].second)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            if (v[i].first < v[i - 1].first || v[i].second < v[i - 1].second)
            {
                flag = 0;
                break;
            }
            if ((v[i].first - v[i - 1].first) < (v[i].second - v[i - 1].second))
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}