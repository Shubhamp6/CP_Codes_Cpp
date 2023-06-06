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
        int a1, a2, b1, b2, c1, c2;
        cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
        int total = a1 + b1 + c1;
        int pos2 = min(c1, b2);
        c1 -= pos2;
        b2 -= pos2;
        total -= pos2;
        int sum = pos2 * 2;
        int neg2 = min(c2, c1 + a1);
        c2 -= neg2;
        sum -= c2 * 2;
        total -= neg2;
        cout << sum << endl;

    }
    return 0;
}