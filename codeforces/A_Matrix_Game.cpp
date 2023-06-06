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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        set<int> s1, s2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j])
                {
                    s1.insert(i);
                    s2.insert(j);
                }
            }
        }
        int count = 0;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (s1.find(i) == s1.end() && s2.find(j) == s2.end())
                {
                    count++;
                    v.push_back({i, j});
                }
            }
        }
        int flag = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (s1.find(v[i].first) == s1.end() && s2.find(v[i].second) == s2.end())
            {
                if (flag)
                    flag = 0;
                else
                    flag = 1;
                s1.insert(v[i].first);
                s2.insert(v[i].second);
            }
        }
        if (flag)
            cout << "Ashish" << endl;
        else
            cout << "Vivek" << endl;
    }
    return 0;
}