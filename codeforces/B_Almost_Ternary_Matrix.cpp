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
        vector<vector<int>> v(n, vector<int>(m, 0));
        for (int i = 0; i < n; i += 2)
        {
            for (int j = 0; j < m; j +=2)
            {
                if (j % 4 == i % 4)
                {
                    v[i][j] = 1;
                    v[i + 1][j + 1] = 1;
                }
                else
                {
                    v[i + 1][j] = 1;
                    v[i][j + 1] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
        }
    return 0;
}