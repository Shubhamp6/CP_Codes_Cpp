#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string a, b;
    cin >> a >> b;
    int dp[a.length() + 1][b.length() + 1] = {0};
    for (int i = 0; i < a.length() + 1; i++)
        dp[i][0] = 0;
    for (int i = 1; i < b.length() + 1; i++)
        dp[0][i] = 0;

    vector<pair<int, int>> hitI;
    for (int i = 1; i <= a.length(); i++)
    {
        for (int j = 1; j <= b.length(); j++)
        {
            if (a[i - 1] == b[j - 1] && (abs(i - j) <= dp[i - 1][j - 1] + 1))
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                hitI.push_back({i - 1, j - 1});
            }
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    // int count = 0;
    // cout << 1 << endl;
    // count = max(hitI[0].first, hitI[0].second);
    // for (int i = 1; i < hitI.size(); i++)
    //     count += (max(hitI[i].first - hitI[i - 1].first, hitI[i].second - hitI[i - 1].second) - 1);
    // count += (max(a.length() - hitI[hitI.size() - 1].first, b.length() - hitI[hitI.size() - 1].second) - 1);
    cout << max(a.length(),b.length()) - dp[a.length()][b.length()] << endl;
    return 0;
}