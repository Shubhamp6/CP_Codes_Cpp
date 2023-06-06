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
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        int ans1, ans2;
        (x < y) ? ans1 = x * b + (y - x) *a : ans1 = y * b + (x - y) * a;
        ans2 = x * a + y * a;
        int ans = min(ans1, ans2);
        cout << ans << endl;
    }
    return 0;
}