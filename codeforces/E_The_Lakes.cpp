#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>> &a, vector<vector<int>> &vis, int i, int j, int n, int m)
{
    if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j]|| !a[i][j])
        return 0;

    vis[i][j] = 1;
    int volume = a[i][j];

    volume += dfs(a, vis, i + 1, j, n, m);
    volume += dfs(a, vis, i - 1, j, n, m);
    volume += dfs(a, vis, i, j + 1, n, m);
    volume += dfs(a, vis, i, j - 1, n, m);
    return volume;
}

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

        vector<vector<int>> a(n, vector<int>(m, 0));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
                cin >> a[i][j];
        }

        vector<vector<int>> vis(n, vector<int>(m, 0));

        int maxVolume = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (!vis[i][j] && a[i][j])
                    maxVolume = max(maxVolume, dfs(a, vis, i, j, n, m));
            }
        }
        cout << maxVolume << "\n";
    }
    return 0;
}