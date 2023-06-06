#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;

    map<int, int> g;
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int v, u;
        cin >> v >> u;
        g[min(v, u)]++;
        if (g[min(v, u)] == 1)
            ans++;
    }

    int q;
    cin >> q;
    int ans1 = ans;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int v, u;
            cin >> v >> u;
            g[min(v, u)]++;
            if (g[min(v, u)] == 1)
                ans1++;
        }
        else if (type == 2)
        {
            int v, u;
            cin >> v >> u;
            g[min(v, u)]--;
            if (g[min(v, u)] < 1)
                ans1--;
        }
        else
        {
              cout << n - ans1 << endl;
            // ans1 = ans;
        }
    }

    return 0;
}