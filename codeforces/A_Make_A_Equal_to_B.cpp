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
        int a[n], b[n];
        int countA = 0, countB = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i])
                countA++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if(b[i])
            countB++;
        }

        int ans = abs(countA - countB);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (ans == 0)
                    flag = 1;
                ans--;
            }
        }

        cout << abs(countA - countB) + flag << endl;
    }
    return 0;
}