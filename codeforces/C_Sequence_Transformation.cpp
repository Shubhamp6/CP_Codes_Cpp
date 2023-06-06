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
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0)
                m[a[i]] = 0;
            else if (a[i] == a[i - 1])
                continue;
            else
            {
                m[a[i]]++;
            }
        }
        int maxC = INT_MAX, key;

        for (auto i : m)
        {
            if (i.first != a[n - 1])
                i.second++;
            maxC = min(maxC, i.second);
            // if (maxC > i.second)
            // {
            //     key = i.first;
            //     maxC = i.second;
            // }
        }

        // int ans = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (key == a[i])
        //     {
        //         if (i == 0)
        //             continue;
        //         else if (a[i] == a[i - 1])
        //             continue;
        //         else
        //             ans++;
        //     }
        // }
        // if (a[n - 1] != key)
        //     ans++;

        // cout << ans << endl;
        if (m.size() == 1)
            cout << 0 << endl;
        else
            cout << maxC << endl;
    }
    return 0;
}