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

        vector<int> v(n, 0);
        map<int, int> m;
        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v[i] = a;
            m[a]++;
            if (a == 1)
                flag = 1;
        }

        if (m.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }

        if (flag)
        {
            cout << -1 << endl;
            continue;
        }

        vector<pair<int, int>> p;
        int index;
        for (int i = 0; i < n; i++)
        {
            int breakFlag = 0;
            for (int j = 0; j < n; j++)
            {
                if ((v[i] / v[j]) + 1 == 2 && v[i] != v[j])
                {
                    p.push_back({i, j});
                    v[i] = 2;
                    index = i;
                    breakFlag = 1;
                    break;
                }
            }
            if (breakFlag)
                break;
        }

        // cout << v[index] << endl;

        // cout << index << endl;

        for (int i = 0; i < n; i++)
        {
            if (i != index)
            {
                do
                {
                    p.push_back({i, index});
                    v[i] = (v[i] / v[index]) + 1;
                } while ((v[i] / v[index]) + 1 != 2);
            }
        }

        cout << p.size() << endl;
        for (int i = 0; i < p.size(); i++)
            cout << p[i].first + 1 << " " << p[i].second + 1 << endl;
    }
    return 0;
}