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
        int c[3];
        cin >> c[0] >> c[1] >> c[2];

        int a[5];
        cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

        if (c[0] < a[0] || c[1] < a[1] || c[2] < a[2])
            cout << "NO" << endl;
        else
        {
            int c1 = 0, c2 = 0;
            if (a[3] - (c[0] - a[0]) > 0)
                c1 = a[3] - (c[0] - a[0]);
            if (a[4] - (c[1] - a[1]) > 0)
                c2 = a[4] - (c[1] - a[1]);

            if (c1 + c2 <= c[2] - a[2])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}