#include <bits/stdc++.h>
using namespace std;
#define int long long
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
        if (n < m)
            swap(n, m);
        if (m <= n / 2)
            cout << m << endl;
        else
        {
            // int a = (n - (((m - (n / 2)) / 2) * 2)) / 2;
            // int b = (m - a) / 2;
            cout << (m+n)/3 << endl;
        }
    }
    return 0;
}