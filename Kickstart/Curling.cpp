#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int T = 1;
    while (t--)
    {
        int sRadius, cRadius;
        cin >> sRadius >> cRadius;
        int n, m;
        cin >> n;
        vector<pair<int, int>> red;
        int minDisRed = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            red.push_back({a, b});
            int dis = (red[i].first * red[i].first) + (red[i].second * red[i].second);
            minDisRed = min(minDisRed, dis);
        }
        cin >> m;
        vector<pair<int, int>> yellow;
        int minDisYellow = INT_MAX;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            yellow.push_back({a, b});
            int dis = (yellow[i].first * yellow[i].first) + (yellow[i].second * yellow[i].second);
            minDisYellow = min(minDisYellow, dis);
        }

        int r = 0, y = 0;
        int effeRadius = cRadius + sRadius;
        if (minDisYellow > minDisRed)
        {
            for (int i = 0; i < n; i++)
            {
                if ((red[i].first * red[i].first) + (red[i].second * red[i].second) < minDisYellow && (red[i].first * red[i].first) + (red[i].second * red[i].second) <= effeRadius * effeRadius)
                    r++;
            }
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                if ((yellow[i].first * yellow[i].first) + (yellow[i].second * yellow[i].second) < minDisRed && (yellow[i].first * yellow[i].first) + (yellow[i].second * yellow[i].second) <= effeRadius * effeRadius)
                    y++;
            }
        }
        cout << "Case #" << T << ": " << r << " " << y << "\n";
        T++;
    }
    return 0;
}