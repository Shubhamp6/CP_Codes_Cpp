#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int T = 1;
    while (t--)
    {
        int d, n, x;
        cin >> d >> n >> x;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            v.push_back({b, c});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int profit = 0, i = 0;
        for (int i = 0; i < n; i++)
        {
            int proMax = INT_MIN, day = v[i].first;
            if (day <= d - 1)
            {
                while (day == v[i].first)
                {
                    proMax = max(proMax, v[i].second);
                    i++;
                }
                profit += proMax;
                d--;
                i--;
            }
        }

        cout << "Case #" << T << ": " << profit << "\n";
        T++;
    }
    return 0;
}