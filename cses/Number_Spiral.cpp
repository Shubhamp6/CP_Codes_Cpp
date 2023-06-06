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
        int n, m;
        cin >> n >> m;
        int ans;
        if (n > m)
        {
            if (n % 2)
            {
                ans = (n - 1) * (n - 1);
                ans += m;
            }
            else
            {
                ans = n * n;
                ans -= (m - 1);
            }
        }
        else
        {
            if (m % 2)
            {
                ans = m * m;
                ans -= n - 1;
            }
            else
            {
                ans = (m - 1) * (m - 1);
                ans += n;
            }
        }
        cout << ans << endl;
    }
    return 0;
}