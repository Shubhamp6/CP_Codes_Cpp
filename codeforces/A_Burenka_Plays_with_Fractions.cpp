#include <bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0 && c == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (a == 0 || c == 0)
        {
            cout << 1 << endl;
            continue;
        }
        int den = gcd(b * c, a * d);
        int x = b * c / den;
        int y = a * d / den;

        if (x == y)
            cout << 0 << endl;
        else if (x == 1 || y == 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}