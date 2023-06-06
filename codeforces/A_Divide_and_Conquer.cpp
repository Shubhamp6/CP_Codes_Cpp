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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2)
        {
            int minCount = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2)
                {
                    int count = 0;
                    while (a[i] % 2)
                    {
                        a[i] /= 2;
                        count++;
                    }
                    minCount = min(minCount, count);
                }
                else
                {
                    int count = 0;
                    while (!(a[i] % 2))
                    {
                        a[i] /= 2;
                        count++;
                    }
                    minCount = min(minCount, count);
                }
            }
            cout << minCount << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}