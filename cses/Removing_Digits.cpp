#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    // int n2 = n, count = 0;
    // while (n)
    // {
    //     vector<int> v;
    //     int n1 = n;
    //     while (n1)
    //     {
    //         v.push_back(n1 % 10);
    //         n1 /= 10;
    //     }
    //     int maxNum = INT_MIN;
    //     for (int i = 0; i < v.size(); i++)
    //         maxNum = max(maxNum, v[i]);
    //     n -= maxNum;
    //     count++;
    // }
    // cout << count << endl;

    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 0; i <= n; i++)
    {
        for (char c : to_string(i))
            dp[i] = min(dp[i], dp[i - (c - '0')] + 1);
    }
    cout << dp[n] << endl;
    return 0;
}