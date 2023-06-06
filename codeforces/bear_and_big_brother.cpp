#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int k, n, w;
    cin >> k >> n >> w;
    int ans = ((((w + 1) * w) / 2) * k) - n;
    if (ans > 0)
        cout << ans << endl;
    else
        cout << 0 << endl;
    return 0;
}