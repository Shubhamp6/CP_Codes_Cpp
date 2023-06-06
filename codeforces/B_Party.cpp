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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        map<int, vector<int>> fr1;
        map<int, vector<int>> fr2;
        map<int, int> v;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            fr1[a - 1].push_back(b-1);
            fr2[b - 1].push_back(a-1);
            v[a - 1]++;
            v[b - 1]++;
        }
        if (!m % 2)
            cout << 0 << endl;
        else
        {

            vector<pair<int, int>> v1;
            for (auto i : v)
                v1.push_back({i.second, i.first});
            sort(v1.begin(), v1.end());
            int minInd = -1, minInd1 = -1, minInd2 = -1, prePair = 0;
            for (int i = 0; i < v1.size(); i++)
            {
                if ((v1[i].first) % 2)
                {
                    minInd = i;
                    break;
                }
                else
                {
                  
                }
            }
            if ()
            {
                /* code */
            }
        }
    }
    return 0;
}