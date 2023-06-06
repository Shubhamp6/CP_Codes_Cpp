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
        int max1 = INT_MIN, max2 = INT_MIN, rep = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            max1 = max(max1, a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (max1 == a[i])
                rep++;
            if (max1 != a[i])
                max2 = max(max2, a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == max1)
            {
                if (rep > 1)
                    cout << 0 << " ";
                else
                    cout << max1 - max2 << " ";
            }
            else
                cout << a[i] - max1 << " ";
        }

        cout << endl;
    }
    return 0;
}