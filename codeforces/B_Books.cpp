#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = 0, r = 0, maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        while (r < n && sum + a[r] <= t)
        {
            sum += a[r];
            r++;
        }
        maxLen = max(maxLen, (r - i));
        sum -= a[i];
    }

    cout << maxLen << endl;
    return 0;
}
