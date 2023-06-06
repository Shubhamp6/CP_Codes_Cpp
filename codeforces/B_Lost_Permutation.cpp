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
        int rem, sum;
        cin >> rem >> sum;
        int sum1 = 0;
        int flag = 0, n = INT_MIN;
        for (int i = 0; i < rem; i++)
        {
            int a;
            cin >> a;
            sum1 += a;
            n = max(n, a);
        }
        while (sum >= (n * (n + 1)) / 2 - sum1)
        {
            if (sum == (n * (n + 1)) / 2 - sum1)
            {
                flag = 1;
                break;
            }
            n++;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}