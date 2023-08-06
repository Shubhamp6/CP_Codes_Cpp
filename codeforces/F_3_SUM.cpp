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
        unordered_map<int, int> m;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            ++m[a%10];
        }

        vector<int> v;
        for (auto u : m)
        {
            if (u.second > 3)
                u.second = 3;
            for (int i = 0; i < u.second; ++i)
                v.push_back(u.first);
        }

        int flag = 0;
        for (int i = 0; i < v.size(); ++i)
        {
            for (int j = i + 1; j < v.size(); ++j)
            {
                if (m[v[i]] == 1)
                    m.erase(v[i]);
                else
                    --m[v[i]];
                if (m[v[j]] == 1)
                    m.erase(v[j]);
                else
                    --m[v[j]];
                // cout << v[i] << " " << v[j] << "\n";
                if (m[3 - v[j] - v[i]] > 0 || m[13 - v[j] - v[i]] > 0 || m[23 - v[j] - v[i]] > 0)
                {
                    flag = 1;
                    break;
                }
                ++m[v[i]];
                ++m[v[j]];
            }
            if (flag)
                break;
        }

        if (flag)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}