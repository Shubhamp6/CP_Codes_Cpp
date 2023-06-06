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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int cur = 0;
        int ans = INT_MIN;
        for (int i = 0; i < n - 1; i++)
        {
            cur += a[i];
            sum -= a[i];
            ans = max(ans,__gcd(sum,cur));
        }

        cout << ans << endl;
    }
    return 0;
}