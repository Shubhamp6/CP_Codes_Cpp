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
        int n, m;
        cin >> n >> m;
        if (n == 1 && m == 1)
        {
            cout << 0 << endl;
            continue;
        }
        cout << max(n, m) + (min(n, m) * 2) - 2 << endl;
    }
    return 0;
}