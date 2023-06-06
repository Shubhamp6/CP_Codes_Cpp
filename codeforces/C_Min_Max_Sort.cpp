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
        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i + 1 != a[i])
                pos = a[i];
        }

        int count = 0;
        // map<int, int> m;
        // for (int i = 1; i < n; i++)
        // {
        //     // cout << " " <<i << endl;
        //     if (abs(a[i] - a[i - 1]) > 1 || a[i - 1] - a[i] == 1)
        //     {
        //         if (a[i] <= n / 2)
        //             m[a[i]]++;
        //         else
        //             m[n + 1 - a[i]]++;
        //         i++;
        //     }
        // }
        // cout << m.size() << endl;
    }
    return 0;
}