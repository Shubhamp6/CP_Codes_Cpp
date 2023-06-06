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
        int a, b, c, x, y, z;
        cin >> a >> b >> c;
        z = c;
        y = z + b;
        x = y + a;
        cout << x << " " << y << " " << z << "\n";
    }
    return 0;
}