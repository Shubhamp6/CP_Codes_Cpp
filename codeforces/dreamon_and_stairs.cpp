#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    if (m > n)
    {
        cout << -1 << endl;
        return 0;
    }

    if (n % 2 == 0 && (n / 2) % m == 0)
    {
        cout << n / 2 << endl;
        return 0;
    }
    int ans = (n / 2) + (m - ((n / 2) % m));
    cout << ans << endl;
    return 0;
}