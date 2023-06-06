#include <bits/stdc++.h>
using namespace std;
#define ll int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        int ans;
        cin >> n;
        ll c = n, b = 1;
        int p = 0, f = 1;
        while (n != 0)
        {
            n = n & (n - 1);
            p++;
        }
        ans = p;
        for (int i = 0; i < p - 1; i++)
        {
            c -= b;
            int j = 2;
            while (c % j == 0)
            {
                c /= j;
                j++;
            }
            if (c == 1)
            {
                ans = 2 + i;
            }
            b *= 2;
        }

        cout << ans << endl;
    }
    return 0;
}