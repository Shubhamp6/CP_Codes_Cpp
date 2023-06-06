#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;

    if (n)
    {
        cout << 0 << endl;
    }

    int t = 2, min = 0;
    while (t <= n)
    {
        int p = pow(t, 2);
        int ans = (int)(((p * (p - 1)) / 2) - (((t - 2) + min )* 8));
        min += (t - 2);
        cout << ans << endl;
        t++;
    }

    return 0;
}