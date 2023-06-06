#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int x, y, z;
    cin >> x >> y >> z;
    int flagx = 0, flagy = 0, flagz = 0;
    if (x >= 500)
    {
        x -= 100;
        flagx = 1;
    }
    if (y >= 500)
    {
        y -= 100;
        flagy = 1;
    }
    if (z >= 500)
    {
        z -= 100;
        flagz = 1;
    }

    if (x + y >= 500 && !flagx && !flagy)
    {
        x -= 100;
        flagx = 1;
        flagy = 1;
    }
    if (x + z >= 500 && !flagx && !flagz)
    {
        x -= 100;
        flagx = 1;
        flagy = 1;
    }
    if (z + y >= 500 && !flagz && !flagy)
    {
        y -= 100;
        flagx = 1;
        flagy = 1;
    }

    if (x + y + z >= 500 && !flagx && !flagy && !flagz)
        x -= 100;

    cout << x + y + z << endl;
    return 0;
}