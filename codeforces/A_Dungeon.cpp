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
        int a, b, c;
        cin >> a >> b >> c;
        int k = (a + b + c) / 9;
        if (((a + b + c) % 9 == 0) && a >= k && b >= k && c >= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}