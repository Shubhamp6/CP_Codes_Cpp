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

        int isOddPresent = 0, minNum = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            minNum = min(minNum, a);

            if (a % 2)
                ++isOddPresent;
        }

        if (!isOddPresent || minNum % 2)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}