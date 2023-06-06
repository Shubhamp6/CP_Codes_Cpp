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
            cin >> a[i];
        sort(a, a + n);
        pair<int, int> p;
        int minI = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            if ((a[i] - a[i - 1]) < minI)
            {
                p = make_pair(i - 1, i);
                minI = (a[i] - a[i - 1]);
            }
        }
        cout << a[p.first] << " ";
        for (int i = p.second + 1; i < n; i++)
        {
            cout << a[i] << " ";
        }

        for (int i = 0; i < p.first; i++)
        {
            cout << a[i] << " ";
        }

        cout << a[p.second] << endl;
        // cout << p.first << p.second << endl;
    }
    return 0;
}