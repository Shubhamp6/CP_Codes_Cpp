#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> pair[], vector<int> &vis, int i, int source)
{
    if (vis[i])
        return;
    vis[i] = source;
    for (auto u : pair[i])
        dfs(pair, vis, u, source);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> pair[n + 1];

    for (int i = 0; i < m; ++i)
    {
        int k;
        cin >> k;
        int u;
        if (k > 0)
        {
            cin >> u;
        }
        for (int j = 1; j < k; ++j)
        {
            int a;
            cin >> a;
            pair[a].push_back(u);
            pair[u].push_back(a);
            u = a;
        }
    }

    vector<int> vis(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        if (!vis[i])
        {
            dfs(pair, vis, i, i);
        }
    }

    unordered_map<int, int> m1;
    for (int i = 1; i <= n; ++i)
        ++m1[vis[i]];

    for (int i = 1; i <= n; ++i)
        cout << m1[vis[i]] << " ";
    cout << "\n";

    return 0;
}