#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m, d;
    cin >> n >> m >> d;

    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    int minSteps = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int mid = v[i][j];
            int steps = 0;
            int flag = 0;
            for (int k = 0; k < n; k++)
            {
                for (int l = 0; l < m; l++)
                {
                    if (abs(v[k][l] - mid) % d)
                    {
                        flag = 1;
                        break;
                    }
                    steps += abs(v[k][l] - mid) / d;
                }
                if (flag)
                    break;
            }
            if (flag)
                continue;
            minSteps = min(minSteps, steps);
        }
    }

    if (minSteps == INT_MAX)
        cout << -1 << endl;
    else
        cout << minSteps << endl;

    return 0;
}