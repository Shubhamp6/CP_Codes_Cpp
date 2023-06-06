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
        int n;
        cin >> n;
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";
        int m;
        if (n % 2)
            m = n - 1;
        else
            m = n;
        for (int i = m; i >= 2; i -= 2)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}