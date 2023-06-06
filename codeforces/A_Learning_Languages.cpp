#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> g[], vector<int> &vis, int source)
{
    if (vis[source])
        return;

    vis[source] = 1;
    for (auto u : g[source])
    {
        if (!vis[u])
            dfs(g, vis, u);
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;

    vector<int> langs[m + 1];
    int zeroLang = 0;
    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        int noOfLang;
        cin >> noOfLang;
        if (!noOfLang)
        {
            zeroLang++;
            vis[i] = 1;
        }
        for (int j = 0; j < noOfLang; j++)
        {
            int lang;
            cin >> lang;
            langs[lang].push_back(i);
        }
    }

    vector<int> g[n];
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 0; j < langs[i].size(); j++)
        {
            for (int k = 0; k < langs[i].size(); k++)
            {
                if (langs[i][j] != langs[i][k])
                {
                    g[langs[i][j]].push_back(langs[i][k]);
                    g[langs[i][k]].push_back(langs[i][j]);
                }
            }
        }
    }

    int componentCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(g, vis, i);
            componentCount++;
        }
    }
    if (componentCount)
        componentCount--;
    cout << componentCount + zeroLang << endl;

    return 0;
}