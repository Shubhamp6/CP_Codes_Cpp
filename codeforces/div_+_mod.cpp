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
        int l, r, a;
        cin >> l >> r >> a;
        int x = r, x1 = ((r / a) * a) - 1;
        int ans = (x / a) + (x % a), ans1 = (x1 / a) + (x1 % a);
        if (a <= r && (r - ((r % a) + 1)) >= l)
            ans = max(ans, ans1);
        cout << ans << endl;
    }
    return 0;
}