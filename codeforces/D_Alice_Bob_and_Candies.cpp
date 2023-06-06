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
        int i = 0, j = n - 1;
        int prevl = 0, prevr = 0, totalR = 0, totalL = 0, total = 0;
        while (i <= j)
        {
            int curl = 0, curr = 0;
            int flagl = 1, flagr = 1;
            while (prevr >= curl && i <= j)
            {
                if (flagl)
                {
                    flagl = 0;
                    total++;
                }
                curl += a[i];
                totalL += a[i];
                i++;
            }
            prevl = curl;
            while (prevl >= curr && i <= j)
            {
                if (flagr)
                {
                    flagr = 0;
                    total++;
                }
                curr += a[j];
                totalR += a[j];
                j--;
            }
            prevr = curr;
        }
        cout << total << " " << totalL << " " << totalR << endl;
    }
    return 0;
}