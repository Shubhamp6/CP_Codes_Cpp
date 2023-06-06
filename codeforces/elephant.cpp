#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int x;
    cin >> x;
    int ans = 0, count = 5;
    while (x)
    {
        ans += x / count;
        x = (x % count);
        count--;
    }
    cout << ans << endl;

    return 0;
}