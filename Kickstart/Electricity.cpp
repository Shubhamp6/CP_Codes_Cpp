#include <bits/stdc++.h>
using namespace std;

int dp[200001];

int dfs(vector<int> v[], int a[], int i)
{
    int total = 0;
    for (auto u : v[i])
    {
        if (a[u] < a[i])
        {
            if (dp[u] == -1)
                total += (1 + dfs(v, a, u));
            else
                total += 1 + dp[u];
        }
    }
    return dp[i] = total;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int T = 1;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v[n];
        int a[n];
        memset(dp, -1, sizeof(dp));
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int maxCon = INT_MIN;
        // int con[n];
        // memset(con, 0, sizeof(con));
        // for (int i = 0; i < n; i++)
        // {
        //     int conCount = 0;
        //     for (int j = 0; j < v[i].size(); j++)
        //     {
        //         if (a[v[i][j]] < a[i])
        //             conCount++;
        //     }
        //     con[i] = conCount;
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     int count = con[i];
        //     for (int j = 0; j < v[i].size(); j++)
        //     {
        //         if (a[v[i][j]] < a[i])
        //         {
        //             count += con[v[i][j]];
        //         }
        //     }
        //     maxCon = max(maxCon, count);
        // }
        for (int i = 0; i < n; i++)
            maxCon = max(maxCon, dfs(v, a, i));

        cout << "Case #" << T << ": " << maxCon + 1 << "\n";
        T++;
    }

    return 0;
}