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
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        int a1 = max(a - n, x);
        int n1 = n - (a - a1);
        int b1 = max(b - n1, y);

        int a2 = max(b - n, y);
        int n2 = n - (b - a2);
        int b2 = max(a - n2, x);

        cout << min(a1 * b1, a2 * b2) << endl;
    }
    return 0;
}