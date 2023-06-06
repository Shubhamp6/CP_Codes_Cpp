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
        int a;
        cin >> a;
        if (360 % (180 - a))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}