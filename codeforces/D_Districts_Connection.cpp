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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<pair<int, int>> v;
        vector<int> v1;
        int diffVal = -1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[0])
            {
                v1.push_back(i + 1);
                continue;
            }
            diffVal = i + 1;
            v.push_back({1, i + 1});
        }
        for (int i = 0; i < v1.size(); i++)
        {
            v.push_back({v1[i], diffVal});
        }
        if (diffVal == -1)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i].first << " " << v[i].second << endl;
            }
        }
    }
    return 0;
}