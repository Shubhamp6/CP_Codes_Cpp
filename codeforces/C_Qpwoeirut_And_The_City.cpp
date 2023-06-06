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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int maxNoCool = (n - 1) / 2;
        int curNoCool = 0, oddNo = 0, evenNo = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                curNoCool++;
            }
        }
        if (curNoCool == maxNoCool)
            cout << 0 << endl;
        else
        {
            int odd = 0, even = 0;
            for (int i = 1; i < n - 1; i = i + 2)
            {
                odd++;
                if (a[i] > a[i - 1] && a[i] > a[i + 1])
                    continue;
                else
                    oddNo += max(a[i + 1], a[i - 1]) - a[i] + 1;
            }
            for (int i = 2; i < n - 1; i = i + 2)
            {
                even++;
                if (a[i] > a[i - 1] && a[i] > a[i + 1])
                    continue;
                else
                    evenNo += max(a[i + 1], a[i - 1]) - a[i] + 1;
            }
            if (even && odd)
                cout << min(oddNo, evenNo) << endl;
            else if (even)
                cout << evenNo << endl;
            else
                cout << oddNo << endl;
        }
    }
    return 0;
}