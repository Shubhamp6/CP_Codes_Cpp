#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3, y3, x4, y4;
    if (abs(x1 - x2) == abs(y1 - y2))
    {
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
        cout << x3  << " " << y3 << " " << x4 << " " << y4 << endl;
    }
    else if (x1 == x2)
    {
        x3 = x1 + abs(y1 - y2);
        y3 = y1;
        x4 = x1 + abs(y1 - y2);
        y4 = y2;
        cout << x3  << " " << y3 << " " << x4 << " " << y4 << endl;
    }
    else if (y1 == y2)
    {
        x3 = x1;
        y3 = y1 + abs(x1 - x2);
        x4 = x2;
        y4 = y1 + abs(x1 - x2);
        cout << x3  << " " << y3 << " " << x4 << " " << y4 << endl;
    }
    else
        cout << -1 << endl;
    return 0;
}