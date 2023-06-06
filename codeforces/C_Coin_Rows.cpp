#include <bits/stdc++.h>
using namespace std;
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
        int a[2][n];
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        int prefix[n];
        prefix[0] = 0;
        int sum1 = 0;
        for (int i = 1; i < n; i++)
        {
            //cout << a[0][2] << endl;
            prefix[i] = prefix[i - 1] + a[0][i];
            sum1 += a[0][i];
            //cout << prefix[i] << endl;
        }
        int sufix[n] = {0}, sum2 = 0;
        for (int i = n - 2; i > -1; i--)
        {
            sufix[i] = sufix[i + 1] + a[1][i];
            sum2 += a[1][i];
        }

        int minA = INT_MAX, index;
        for (int i = 0; i < n; i++)
        {
            if (minA > max(sum1 - prefix[i], sum2 - sufix[i]))
            {
                // cout << sum1 - prefix[i] << " " << sum2 - sufix[i] << endl;
                minA = max(sum1 - prefix[i], sum2 - sufix[i]);
                index = i;
            }
        }

        cout << minA << endl;
    }
    return 0;
}