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
        int n1 = 1, m1 = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (((i - 2) > 0 && (j + 1) <= m) || ((i + 2) <= n && (j - 1) > 0) || ((i - 2) > 0 && (j - 1) > 0) || ((i + 2) <= n && (j + 1) <= m) || ((j + 2) <= m && (i - 1)) > 0 || ((j - 2) > 0 && (i + 1) <= n) || ((j + 2) <= m && (i + 1) <= n) || ((j - 2) > 0 && (i - 1) > 0))
                    continue;
                else
                {
                    n1 = i;
                    m1 = j;
                }
            }
        }
        cout << n1 << " " << m1 << endl;
    }
    return 0;
}