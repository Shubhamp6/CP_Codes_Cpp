#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int total = (x - 1) + (n - x) + (y - 1) + (n - y) + min(x - 1, y - 1) + min(x - 1, (n - y)) + min(y - 1, (n - x)) + min((n - x), (n - y));
        cout << total << endl;
    }
    return 0;
}