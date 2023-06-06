#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, x0, y0;
    cin >> n >> x0 >> y0;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    vector<pair<int, int>> p;

    for (int i = 0; i < n; i++)
    {
        int x = v[i].first - x0;
        int y = v[i].second - y0;

        if (x > 0 && y < 0)
        {
            x = -x;
            y = -y;
        }
        if (x < 0 && y < 0)
        {
            x = -x;
            y = -y;
        }

        int gcd = __gcd(x, y);
        x = x / gcd;
        y = y / gcd;

        p.push_back({x, y});
    }

    set<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        //cout << p[i].first << " " << p[i].second << endl;
        s.insert(p[i]);
    }

    cout << s.size() << endl;

    return 0;
}