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
        int a[n];
        int maxE = INT_MIN, minE = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i)
                maxE = max(maxE, a[i]);
            if (i != n - 1)
                minE = min(minE, a[i]);
        }
        int ans = INT_MIN;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, a[i] - a[i+1]);
        }

        if (n == 1)
            cout << 0 << endl;
        else
            cout << max(maxE - a[0], max(a[n - 1] - minE, ans)) << endl;
    }
    return 0;
}