#include <bits/stdc++.h>
using namespace std;

// void dfs(int n, int m, vector<string> s, int i, int j)
// {
//     if (i < n || j < m)
//         return;
//     if (i >= n || j >= m)
//         return;
//     if (s[i][j] != '0')
//         return;
//     dfs(n, m, s, );
//     dfs(n, m, s, perimeter);
//     dfs(n, m, s, perimeter);
//     dfs(n, m, s, perimeter);
// }

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
        vector<string> s;
        // vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            string s1;
            cin >> s1;
            s.push_back(s1);
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         if (s[i][j] == '0')
        //             p.push_back({i, j});
        //     }
        // }
        int flag = 0, count = 0;
        int di[8] = {-1, 1, 0, -1, 1, 0, 1, -1};
        int dj[8] = {-1, 1, -1, 0, 0, 1, -1, 1};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (s[i][j] == '0')
                {
                    count++;
                    for (int k = 0; k < 8; k++)
                    {
                        if (i + di[k] >= 0 && i + di[k] < n && j + dj[k] >= 0 && j + dj[k] < m)
                        {
                            if (s[i + di[k]][j + dj[k]] == '0')
                            {
                                flag = 1;
                                break;
                            }
                        }
                    }
                }
            }
        }

        if (flag)
            cout << n * m - count << endl;
        else if (count == 0)
            cout << n * m - 2 << endl;
        else if (count == 1)
            cout << n * m - 2 << endl;
        else
            cout << n * m - 1 - count << endl;
        // else
        // {
        //     // int flag = 0;
        //     //  for (int i = 0; i < p.size(); i++)
        //     //  {
        //     //      for (int j = 0; j < p.size(); j++)
        //     //      {
        //     //          if (j == i)
        //     //              continue;
        //     //          if (p[i].first == p[j].first && abs(p[i].second - p[j].second) == 1)
        //     //          {
        //     //              flag = 1;
        //     //              break;
        //     //          }
        //     //          if (p[i].second == p[j].second && abs(p[i].first - p[j].first) == 1)
        //     //          {
        //     //              flag = 1;
        //     //              break;
        //     //          }
        //     //          if (abs(p[i].second - p[j].second) == 1 && abs(p[i].first - p[j].first) == 1)
        //     //          {
        //     //              flag = 1;
        //     //              break;
        //     //          }
        //     //      }
        //     //  }
        //     //  if (flag)
        //     //     cout << n * m - p.size() << endl;
        //     // else
        //     //     cout << n * m - 1 - p.size() << endl;
        // }
    }
    return 0;
}