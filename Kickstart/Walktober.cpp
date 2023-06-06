#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int T = 1;
    while (t--)
    {
        int n, m, p;
        cin >> m >> n >> p;
        int score[m][n];
        int johnScore = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> score[i][j];
                if (i + 1 == p)
                    johnScore += score[i][j];
            }
        }
        int maxScore = 0;
        for (int i = 0; i < n; i++)
        {
            int maxScore1 = INT_MIN;
            for (int j = 0; j < m; j++)
            {
                maxScore1 = max(maxScore1, score[j][i]);
            }
            maxScore += maxScore1;
        }
        cout << "Case #" << T << ": " << maxScore - johnScore << "\n";
        T++;
    }

    return 0;
}