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
        {
            cin >> a[i];
        }
        if (n == 1)
            cout << 0 << endl;
        else
        {
            cout << n - 1 << endl;
            if (a[0] + a[n - 1] % 2)
                a[n - 1] = a[0];
            else
                a[0] = a[n - 1];
            int parity = a[0] % 2;
            cout << 1 << " " << n << endl;
            for (int i = 1; i < n - 1; i++)
            {
                if ((a[i] + parity) % 2)
                    cout << 1 << " " << i + 1 << endl;
                else
                    cout << i + 1 << " " << n << endl;
            }
        }
    }
    return 0;
}