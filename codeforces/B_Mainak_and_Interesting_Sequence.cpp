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
        if (n > m || (n % 2 == 0 && m % 2))
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            if (n % 2 || n == m)
            {
                for (int i = 0; i < n - 1; i++)
                {
                    cout << 1 << " ";
                }
                cout << m - (n - 1) << endl;
            }
            else
            {
                for (int i = 0; i < n - 2; i++)
                {
                    cout << 1 << " ";
                }
                cout << (m - (n - 2)) / 2 << " " << (m - n + 2) / 2 << endl;
            }
        }
    }
    return 0;
}