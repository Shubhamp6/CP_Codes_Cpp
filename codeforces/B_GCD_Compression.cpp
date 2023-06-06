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
        vector<int> a, b;
        for (int i = 0; i < 2 * n; i++)
        {
            int a1;
            cin >> a1;
            if (a1 % 2)
                a.push_back(i + 1);
            else
                b.push_back(i + 1);
        }
        vector<pair<int, int>> p;
        for (int i = 0; i + 1< a.size(); i += 2)
            p.push_back({a[i], a[i + 1]});
        for (int i = 0; i + 1 < b.size(); i += 2)
            p.push_back({b[i], b[i + 1]});
        for (int i = 0; i < n - 1; i++)
            cout << p[i].first << " " << p[i].second << endl;
    }
    return 0;
}