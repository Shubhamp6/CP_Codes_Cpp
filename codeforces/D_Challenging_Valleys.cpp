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
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1] && (i == 0 || a[i - 1] > a[i]))
            {
                while (a[i] == a[i + 1] && i < n)
                    i++;
                if (i == n - 1 || a[i] < a[i + 1])
                    flag++;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}