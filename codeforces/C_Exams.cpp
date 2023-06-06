#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p.push_back({a, b});
    }

    sort(p.begin(), p.end());
    int minday = min(p[0].first, p[0].second);
    for (int i = 1; i < n; i++)
    {
        if (minday <= p[i].second)
            minday = p[i].second;
        else
            minday = p[i].first;
    }

    cout << minday << endl;

    return 0;
}