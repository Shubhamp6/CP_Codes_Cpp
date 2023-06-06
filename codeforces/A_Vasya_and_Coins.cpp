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
        int a, b;
        cin >> a >> b;
        if (a == 0)
        {
            cout << 1 << endl;
        }
        else
            cout << (a + b * 2 + 1) << endl;
    }
    return 0;
}