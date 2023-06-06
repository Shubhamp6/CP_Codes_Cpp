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

        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v[i] = a;
        }

        if (v[n - 1] > v[0])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}