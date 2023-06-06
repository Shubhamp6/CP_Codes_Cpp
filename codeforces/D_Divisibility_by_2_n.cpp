#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    vector<int> v(200001, 0);
    for (int i = 1; i < 200001; i++)
    {
        int j = 0, m = 1;
        while (i % m == 0)
        {
            m *= 2;
            j++;
        }
        v[i] = --j;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int j = 0, m = 1;
            while (a[i] % m == 0)
            {
                m *= 2;
                j++;
            }
            p += (j - 1);
        }
        cout << n << " " << p << endl;
        int count = 0;
        vector<int> g;
        for (int i = n; i > 0; i--)
        {
            g.push_back(v[i]);
        }
        sort(g.begin(), g.end());
        reverse(g.begin(), g.end());
        for (int i = 0; i < n; i++)
        {
            if (n <= p)
                break;
            if (g[i] <= (n - p))
            {
                p += g[i];
                count++;
            }
        }

        if (n > p)
            cout << -1 << endl;
        else
            cout << count << endl;
    }
    return 0;
}