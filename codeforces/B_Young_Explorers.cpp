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
        sort(a, a + n);
        int count = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            count++;
            if (a[i] == count)
            {
                count = 0;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}