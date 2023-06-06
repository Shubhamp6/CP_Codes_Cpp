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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int maxPro = LONG_LONG_MIN;
        maxPro = max(maxPro, a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5]);
        maxPro = max(maxPro, a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[0]);
        maxPro = max(maxPro, a[n - 1] * a[n - 2] * a[n - 3] * a[1] * a[0]);
        maxPro = max(maxPro, a[n - 1] * a[n - 2] * a[2] * a[1] * a[0]);
        maxPro = max(maxPro, a[n - 1] * a[3] * a[2] * a[1] * a[0]);
        maxPro = max(maxPro, a[4] * a[3] * a[2] * a[1] * a[0]);

        cout << maxPro << endl;
    }
    return 0;
}