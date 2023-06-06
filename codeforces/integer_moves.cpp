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
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            cout << 0 << endl;
            continue;
        }
        int a = (x * x) + (y * y);
        int b = sqrt(a);
        if (b * b == a)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}