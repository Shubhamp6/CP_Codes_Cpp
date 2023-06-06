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
        int index, minE = INT_MAX;
        for (int i = 1; i < n - 1; i++)
        {
            if (((a[i + 1] - a[i]) + (a[i] - a[i - 1])) < minE)
            {
                index = i;
                minE = (a[i + 1] - a[i]) + (a[i] - a[i - 1]);
            }
        }
        cout << minE << endl;
    }
    return 0;
}