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
        vector<string> s;
        int min1 = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            string s1;
            cin >> s1;
            s.push_back(s1);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int dif = 0;
                for (int k = 0; k < m; k++)
                {
                    dif = dif + abs(s[i][k] - s[j][k]);
                }
                min1 = min(min1, dif);
            }
        }
        cout << min1 << endl;
    }
    return 0;
}