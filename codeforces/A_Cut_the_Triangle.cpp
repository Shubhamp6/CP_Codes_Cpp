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
        int x[3], y[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> x[i] >> y[i];
        }
        sort(x, x + 3);
        sort(y, y + 3);

        int flag1 = 1, flag2 = 1;
        for (int i = 0; i < 2; i++)
        {
            if (x[i] == x[i + 1])
                flag1 = 0;
            if (y[i] == y[i + 1])
                flag2 = 0;
        }
        if (flag1 || flag2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}