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
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<char> v;
        for (int i = 0; i < m; i++)
        {
            v.push_back('B');
        }

        for (int i = 0; i < n; i++)
        {
            if (v[a[i] - 1] == 'A')
                v[m - a[i]] = 'A';
            else if (v[m - a[i]] == 'A')
                v[a[i] - 1] = 'A';
            else if (a[i] - 1 < m - a[i])
                v[a[i] - 1] = 'A';
            else
                v[m - a[i]] = 'A';
        }

        for (int i = 0; i < m; i++)
        {
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}