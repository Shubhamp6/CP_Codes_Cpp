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
        int a[4];
        cin >> a[0] >> a[1] >> a[2] >> a[3];

        sort(a, a + 4);
        cout << a[0] * a[2] << endl;
    }
    return 0;
}