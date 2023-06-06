#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int c = 1;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }

        int flag = 1;
        for (auto i : m)
        {
            if (i.second > 2)
                flag = 0;
        }
        if (flag && n <= 2 * k)
            cout << "Case #" << c << ": "
                 << "YES" << endl;
        else
            cout << "Case #" << c << ": "
                 << "NO" << endl;
        c++;
    }
    return 0;
}