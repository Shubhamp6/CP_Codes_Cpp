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
        {
            cin >> a[i];
        }
        if (n == 1 && a[0] > 1)
        {
            cout << "NO" << endl;
            continue;
        }

        sort(a, a + n);
        int ans = 1;
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i] - a[i - 1] <= 1)
            {
                a[i] = a[i - 2];
                a[i - 1] = a[i - 2];
            }
            else
            {
                ans = 0;
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}