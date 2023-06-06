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

        int prefix[n];
        prefix[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans +=( prefix[i]*prefix[i]*prefix[i])%998244353;
            for (int j = 0; j < i; j++)
            {
                ans += ((prefix[i]-prefix[j])*(prefix[i]-prefix[j])*(prefix[i]-prefix[j]))%998244353;
            }
            
        }

        cout << ans << endl;
        

    }
    return 0;
}