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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back({a, i});
        }

        sort(v.begin(), v.end());

        int point = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1].second - v[i].second < 0)
            {
                point = i + 1;
                break;
            }
        }
        if (point == -1)
            cout << 0 << endl;
        else
        {
            int count = 0;
            while (point < n)
            {
                point += k;
                count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}