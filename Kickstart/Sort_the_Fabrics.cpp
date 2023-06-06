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
        int n;
        cin >> n;
        vector<pair<string, int>> c;
        int d[n], u[n];
        vector<pair<int, int>> p1, p2;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            cin >> d[i];
            cin >> u[i];
            c.push_back({s, u[i]});
            p1.push_back({d[i], u[i]});
        }
        sort(c.begin(), c.end());
        sort(p1.begin(), p1.end());
        // for (int i = 0; i < n - 1; i++)
        // {
        //     for (int j = 0; j < n - 1 - i; j++)
        //     {
        //         if (c[i].first.compare(c[j].first) == 1)
        //     }
        // }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (c[i].second == p1[i].second)
                count++;
        }
        cout << "Case #" << T << ": " << count << "\n";
        T++;
    }

    return 0;
}