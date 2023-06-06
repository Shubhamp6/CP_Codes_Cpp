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
        vector<int> v;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
            if (a != 0)
                count++;
        }
        if (count % 2)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            vector<pair<int, int>> p1;
            for (int i = 0; i < n; i++)
            {
                if (v[i] != 0)
                    p1.push_back({v[i], i});
            }

            vector<pair<int, int>> p;
            for (int i = 0; i < p1.size(); i += 2)
            {
                if (p1[i].first == p1[i + 1].first)
                {
                    if ((p1[i].second - p[i + 1].second) % 2)
                    {
                        p.push_back({p1[i].second + 1, p1[i + 1].second + 1});
                    }
                    else
                    {
                        p.push_back({p1[i].second, p1[i + 1].second - 1});
                        p.push_back({p1[i].second, p1[i + 1].second + 1});
                    }
                }
                else
                {
                    p.push_back({p1[i].second + 1, p1[i].second + 1});
                    if (p1[i].second - p1[i + 1].second > 1)
                        p.push_back({p1[i].second + 2, p1[i + 1].second});
                    p.push_back({p1[i + 1].second + 1, p1[i + 1].second + 1});
                }
                if (p1.size() - 3 > i)
                    p.push_back({p1[i + 1].second + 1, p1[i + 2].second - 1});
            }
            if (p1.size())
                p.push_back({p1[p1.size() - 1].second + 1, n});
            else
                p.push_back({1, n});
            cout << p.size() << endl;
            for (int i = 0; i < p.size(); i++)
                cout << p[i].first << " " << p[i].second << endl;
        }
    }
    return 0;
}