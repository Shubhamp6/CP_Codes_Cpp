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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        if (n % 2)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            vector<pair<int, int>> p;
            for (int i = 0; i < n; i += 2)
            {
                if (v[i] == v[i + 1])
                    p.push_back({i + 1, i + 2});
                else
                {
                    p.push_back({i + 1, i + 1});
                    p.push_back({i + 2, i + 2});
                }
            }
            cout << p.size() << endl;
            for (int i = 0; i < p.size(); i++)
                cout << p[i].first << " " << p[i].second << endl;
        }
    }
    return 0;
}