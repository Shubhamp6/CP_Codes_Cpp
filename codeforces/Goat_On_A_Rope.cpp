#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    double x, y;
    cin >> x >> y;
    vector<pair<double, double>> p;
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    p.push_back({x1, y1});
    p.push_back({x2, y2});
    sort(p.begin(), p.end());

    double x3 = p[1].first, y3 = p[0].second, x4 = p[0].first, y4 = p[1].second;

    p.push_back({x3, y3});
    p.push_back({x4, y4});

    vector<double> v;
    v.push_back(sqrt((p[0].first - x) * (p[0].first - x) + (p[0].second - y) * (p[0].second - y)));
    v.push_back(sqrt((p[1].first - x) * (p[1].first - x) + (p[1].second - y) * (p[1].second - y)));
    v.push_back(sqrt((p[2].first - x) * (p[2].first - x) + (p[2].second - y) * (p[2].second - y)));
    v.push_back(sqrt((p[3].first - x) * (p[3].first - x) + (p[3].second - y) * (p[3].second - y)));
    if (x >= p[0].first && x <= p[1].first)
    {
        v.push_back(abs(p[0].second - y));
        v.push_back(abs(p[1].second - y));
    }
    if (y >= p[0].second && y <= p[1].second)
    {
        v.push_back(abs(p[0].first - x));
        v.push_back(abs(p[1].first - x));
    }

    sort(v.begin(), v.end());

    cout << fixed << setprecision(3) << v[0] << endl;

    return 0;
}