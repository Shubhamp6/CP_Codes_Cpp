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
        int a[n], b[n];
        int have1 = 0, have0 = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i])
                have1++;
            else
                have0++;
        }
        int flag = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
                flag = 0;
        }
        if (flag || (have1 && have0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}