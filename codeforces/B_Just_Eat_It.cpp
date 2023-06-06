#include <bits/stdc++.h>
using namespace std;
#define int long long

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
        int a[n];
        int totalTestiness = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            totalTestiness += a[i];
        }

        int maxTestiness = INT_MIN, curTestiness = 0, count, curCount = 0;
        for (int i = 0; i < n; i++)
        {
            curTestiness += a[i];
            curCount++;
            if (maxTestiness < curTestiness)
            {
                maxTestiness = curTestiness;
                count = curCount;
            }
            if (curTestiness <= 0)
            {
                curTestiness = 0;
                curCount = 0;
            }
        }
        //cout << count << endl;
        if ((maxTestiness < totalTestiness && count > 1) || count == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}