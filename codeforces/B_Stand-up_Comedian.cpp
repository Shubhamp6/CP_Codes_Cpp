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
        int a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;
        if(a1)
        cout << min(min(a1 + a2, a1 + a3) * 2 + 1, a1 + a2 + a3 + a4) << endl;
        else
        cout << 1 << endl;
    }
    return 0;
}