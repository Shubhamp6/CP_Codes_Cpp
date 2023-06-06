#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}
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
        int ans;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (!i)
                ans = a[i];
            else
            {
                ans = gcd(a[i], ans);
            }
        }
        cout << ans * n << endl;
    }
    return 0;
}