#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<string> wall, vector<vector<int>> vis, int i, int j, int n, int count,vector<vector<int>>& dp)
{
    if (count == 0)
        return 1;
    if (i < 0 || i > 1 || j >= n || wall[i][j] == 'W' || vis[i][j] == 1)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];

    vis[i][j] = 1;
    return dp[i][j] = (dfs(wall, vis, i + 1, j, n, count - 1,dp) || dfs(wall, vis, i - 1, j, n, count - 1,dp) || dfs(wall, vis, i, j + 1, n, count - 1,dp));
}

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
        vector<vector<int>> dp(2,vector<int> (n,-1));
        vector<string> wall;
        int count = 0;
        int first = 1;
        int i1 = -1, j1 = -1;
        for (int i = 0; i < 2; i++)
        {
            string st;
            cin >> st;
            wall.push_back(st);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (wall[j][i] == 'B' && first)
                {
                    i1 = j;
                    j1 = i;
                    first = 0;
                }
                if (wall[j][i] == 'B')
                    count++;
            }
        }

        vector<vector<int>> vis(2, vector<int>(n, 0));
        int flag;
        if (i1 == -1)
            cout << "YES" << endl;
        else
        {
            if (i1 + 1 < 2)
            {
                flag = dfs(wall, vis, i1, j1, n, count,dp);
                flag = flag || dfs(wall, vis, i1 + 1, j1, n, count,dp);
            }
            else if (i1 - 1 > -1)
            {
                flag = dfs(wall, vis, i1 - 1, j1, n, count,dp);
                flag = flag || dfs(wall, vis, i1, j1, n, count,dp);
            }
            else
                flag = dfs(wall, vis, i1, j1, n, count,dp);
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}