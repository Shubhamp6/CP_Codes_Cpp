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
        unordered_map<int, pair<int, int>> m;
        for (int i = 0; i < n; i++)
        {
            m[i].first = 0;
        }

        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == 1)
            {
                m[a[i]].second++;
                m[a[i]].first = i;
            }
            else
            {
                if ((i - m[a[i]].first) % 2 || m[a[i]].second == 0)
                {
                    //cout << 34 << endl;
                    m[a[i]].second++;
                    m[a[i]].first = i;
                }
            }
            //cout << m[3].first << endl;
        }
        for (int i = 1; i <= n; i++)
            cout << m[i].second << " ";

        cout << endl;
    }
    return 0;
}