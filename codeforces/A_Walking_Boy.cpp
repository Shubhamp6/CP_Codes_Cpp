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

        cin >> v[0];
        int count = (v[0]) / 120;
        ;
        for (int i = 1; i < n; i++)
        {
            cin >> v[i];
            count += (v[i] - v[i - 1]) / 120;
        }
        count += (1440 - v[n - 1]) / 120;
        if (count >= 2)
            cout
                << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}