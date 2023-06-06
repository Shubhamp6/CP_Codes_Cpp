#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000007
#define int long long

int solve(vector<string> v, int i, int j, int n)
{
    if (i < 0 || j < 0 || i > n - 1 || j > n - 1 || v[i][j] == '*')
        return 0;
    if (i == n - 1 && j == n - 1)
        return 1;
    return (solve(v, i + 1, j, n) % MAX + solve(v, i, j + 1, n) % MAX) % MAX;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    vector<vector<int>> dp(n, vector<int>(n, 0));
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == '.')
            {
                if (i > 0)
                    (dp[i][j] += dp[i - 1][j]) %= MAX;
                if (j > 0)
                    (dp[i][j] += dp[i][j - 1]) %= MAX;
            }
            else
                dp[i][j] = 0;
        }
    }

    cout << dp[n - 1][n - 1] << endl;

    return 0;
}