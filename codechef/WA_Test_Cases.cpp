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
        string s;
        cin >> s;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                ans = min(ans, a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}