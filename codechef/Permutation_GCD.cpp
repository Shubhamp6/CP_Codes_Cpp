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
        int n, x;
        cin >> n >> x;
        if (x < n)
            cout << -1 << endl;
        else if (n == x)
        {
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << x - (n - 1) << " ";
            for (int i = 0; i < n; i++)
            {
                if (i == (x - (n - 1) - 1))
                    continue;
                cout << i + 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}