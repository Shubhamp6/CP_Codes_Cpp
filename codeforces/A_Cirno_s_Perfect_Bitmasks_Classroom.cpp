#include <bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (x == 1)
            cout << 3 << "\n";
        else
        {
            int j = 0;
            while (!((1 << j) & x))
                j++;
            int ans = (1 << j);
            if (j == log2(x))
            {
                ans += 1;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}