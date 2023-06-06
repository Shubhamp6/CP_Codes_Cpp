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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> p;

        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            p.push_back({l, r});
        }

        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            if (p[i].first <= k && k <= p[i].second)
            {
                for (int j = p[i].first; j <= p[i].second; j++)
                {
                    m[j]++;
                }
            }
        }

        if (!m.size())
        {
            cout << "NO" << endl;
            continue;
        }

        int flag = 0;
        for (auto i : m)
        {
            if (i.second >= m[k] && i.first != k)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}