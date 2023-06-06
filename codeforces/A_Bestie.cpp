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

        int g = a[0];
        for (int i = 1; i < n; i++)
        {
            g = __gcd(g, a[i]);
        }

        int maxNum = 1;
        for (int i = 1; i < n; i++)
        {
            int gcd = a[0];
            for (int j = 1; j < n; j++)
            {
                if (i == j)
                {
                    int op = __gcd(i + 1, a[i]);
                    gcd = __gcd(op, gcd);
                }
                else
                    gcd = __gcd(gcd, a[j]);
            }
            if (gcd == 1)
                maxNum = max(maxNum, i + 1);
        }
        if (g == 1)
            cout << 0 << endl;
        else if (n - maxNum + 1 > 3)
            cout << 3 << endl;
        else
            cout << n - maxNum + 1 << endl;
    }
    return 0;
}