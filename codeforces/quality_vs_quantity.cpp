#include <bits/stdc++.h>
using namespace std;
#define ll int long long
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
        ll a[n], sum1, sum2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        sum1 = a[0];
        sum2 = 0;
        int y = 0;
        for (int i = 1; i < n; i++)
        {
            sum1 += a[i];
            sum2 += a[n - i];
            if (sum1 < sum2)
            {
                y = 1;
            }
        }

        if (y == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}