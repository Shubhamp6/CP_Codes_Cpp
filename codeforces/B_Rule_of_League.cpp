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
        int n, x, y;
        cin >> n >> x >> y;
        if ((x != 0 && y != 0) || (x == 0 && y == 0) || ((n - 1) % (x + y) != 0))
        {
            cout << -1 << endl;
        }
        else
        {
            int a = 2;
            for (int i = 0; i < n - 1; i++)
            {
                cout << a << " ";
                if ((i + 1) % (x + y) == 0)
                {
                    a += (x + y);
                }
            }
            cout << endl;
        }
    }
    return 0;
}