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
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            p.push_back({a[i], i + 1});
        }

        sort(p.begin(), p.end());

        vector<pair<int, int>> v;
        for (int i = 1; i < n; i++)
        {
            v.push_back({p[i].second, (((p[i].first / p[i - 1].first) + 1) * p[i - 1].first - p[i].first)});
            p[i].first = ((p[i].first / p[i - 1].first) + 1) * p[i - 1].first;
        }

        cout << v.size() << endl;
        for (int i = 0; i < n - 1; i++)
            cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}