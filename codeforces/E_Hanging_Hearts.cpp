#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    map<int, int> m;
    vector<int> v[n];
    for (int i = 0; i < n - 1; i++)
    {
        int a;
        cin >> a;
        m[a - 1]++;
        v[a - 1].push_back(i);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << m[0] << endl;
        if (m[i] >= 1)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                if (m[v[i][j]] == 0)
                {
                    count += 2;
                    break;
                }
            }
        }
    }
    cout << count << endl;

    return 0;
}