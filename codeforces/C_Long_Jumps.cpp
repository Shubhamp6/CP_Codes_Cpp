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
        int maxSum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i + a[i] < n)
                a[i] += a[i + a[i]];
            maxSum = max(maxSum, a[i]);
        }
        cout << maxSum << endl;
    }
    return 0;
}