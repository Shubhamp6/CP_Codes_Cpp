#include <bits/stdc++.h>
using namespace std;
#define int long long
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
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        int sum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum1 = a[i][j];
                for (int k = 1; k < min(n, m); k++)
                {
                    if ((i - k) < 0 || j + k >= m)
                        break;
                    sum1 += a[i - k][j + k];
                }

                for (int k = 1; k < min(n, m); k++)
                {
                    if ((i + k) >= n || j + k >= m)
                        break;
                    sum1 += a[i + k][j + k];
                }

                for (int k = 1; k < min(n, m); k++)
                {
                    if (i + k >= n || (j - k )< 0)
                        break;
                    sum1 += a[i + k][j - k];
                }

                for (int k = 1; k < min(n, m); k++)
                {
                    if (i - k < 0 || j - k < 0)
                        break;
                    sum1 += a[i - k][j - k];
                }

                sum = max(sum, sum1);
            }
        }
        cout << sum << endl;
    }
    return 0;
}