#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string a, b;
    cin >> a >> b;
    int n = a.length(), m = b.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX));
    dp[0][0] = 0;
    for(int i = 0;i <= n;++i){
        for(int j = 0;j <= m;++j){
            if(i)
            dp[i][j] = min(dp[i][j],dp[i-1][j]+1);
            if(j)
            dp[i][j] = min(dp[i][j],dp[i][j-1]+1);
            if(i && j)
            dp[i][j] = min(dp[i][j],dp[i-1][j-1]+(a[i-1] != b[j-1]));
        }
    }
    cout << dp[n][m] << "\n";
    return 0;
}