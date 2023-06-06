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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != i)
            {
                ans &= a[i];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}