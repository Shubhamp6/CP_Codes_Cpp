#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    int sum = 0, flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 360 == 0)
        cout << "YES" << endl;
    else if (sum % 2)
        cout << "NO" << endl;
    else
    {
        while (sum > 0)
        {
            int sum1 = sum / 2;
            int dp[n + 1][sum1 + 1];
            for (int i = 0; i < n + 1; i++)
                dp[i][0] = 1;
            for (int i = 1; i < sum1 + 1; i++)
                dp[0][i] = 0;
            for (int i = 1; i < n + 1; i++)
            {
                for (int j = 1; j < sum1 + 1; j++)
                {
                    if (j >= a[i - 1])
                        dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                    else
                        dp[i][j] = dp[i - 1][j];
                }
            }
            if (dp[n][sum1])
            {
                flag = 1;
                break;
            }
            sum -= 360;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}