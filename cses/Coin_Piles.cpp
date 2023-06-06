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
        if (n == 0 && m == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        if (n == 0 || m == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if ((n + m) % 3 == 0 && max(n, m) <= min(n, m) * 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}