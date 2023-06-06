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
        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i].first >> v[i].second;
        sort(v.begin(), v.end());
        pair<int, int> cur;
        cur = make_pair(0, 0);
        int flag = 1;
        string ans;
        for (int i = 0; i < n; i++)
        {
            int r = v[i].first - cur.first;
            int u = v[i].second - cur.second;
            if (u < 0 || r < 0)
            {
                flag = 0;
                break;
            }
            ans += string(r, 'R');
            ans += string(u, 'U');
            cur = v[i];
        }
        if (flag)
        {
            cout << "YES" << endl;
            cout << ans << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}