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
        float x, y;
        cin >> x >> y;
        if (y <= (1.07 * x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}