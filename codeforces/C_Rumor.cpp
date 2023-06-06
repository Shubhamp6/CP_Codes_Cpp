#include <bits/stdc++.h>
using namespace std;
#define int long long

void dfs(vector<int> f[], vector<int> &friends, vector<int> &vis, int i)
{
    vis[i] = 1;
    friends.push_back(i);
    for (auto u : f[i])
    {
        if (!vis[u])
            dfs(f, friends, vis, u);
    }
    return;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int gold[n];
    vector<int> f[n];
    for (int i = 0; i < n; i++)
        cin >> gold[i];

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        f[a].push_back(b);
        f[b].push_back(a);
    }

    vector<vector<int>> groups;
    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vector<int> friends;
            dfs(f, friends, vis, i);
            groups.push_back(friends);
        }
    }

    int minAmount = 0;
    for (int i = 0; i < groups.size(); i++)
    {
        int curMinAmount = LONG_LONG_MAX;
        for (int j = 0; j < groups[i].size(); j++)
        {
            curMinAmount = min(curMinAmount, gold[groups[i][j]]);
        }
        minAmount += curMinAmount;
    }

    cout << minAmount << endl;
    return 0;
}