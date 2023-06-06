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
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        char a[n][m];
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '.')
                {
                    if (a[i][j] == a[i][j - 1] && j > 0)
                    {
                        count2++;
                        count1--;
                        a[i][j] = '*';
                    }
                    else
                        count1++;
                }
            }
        }
        int ans = min((count1 * x + count2 * y), (count1 * x + 2 * count2 * x));
        cout << ans << "\n";
    }

    return 0;
}