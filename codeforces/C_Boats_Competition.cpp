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
        map<int, int> m, m1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        int maxM = INT_MIN, maxM1 = INT_MIN;
        for (auto i : m)
        {
            for (auto j : m)
            {
                if (i.first == j.first)
                    continue;
                m1[i.first + j.first] += min(i.second, j.second);
            }
            maxM = max(maxM, i.second);
        }
        for (auto i : m)
        {
            m1[i.first * 2] += i.second;
        }
        for (auto i : m1)
        {
            maxM1 = max(maxM1, i.second);
        }
        cout << max(maxM / 2, maxM1 / 2) << endl;
    }
    return 0;
}