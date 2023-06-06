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
        int n, q;
        cin >> n >> q;
        int a[n];
        int evenSum = 0, oddSum = 0, evenCount = 0, oddCount = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2)
            {
                oddSum += a[i];
                oddCount++;
            }
            else
            {
                evenSum += a[i];
                evenCount++;
            }
        }

        while (q--)
        {
            int type, x;
            cin >> type >> x;
            if (type)
            {
                oddSum += (x * oddCount);
                if (x % 2)
                {
                    oddCount = 0;
                    evenCount = n;
                    evenSum += oddSum;
                    oddSum = 0;
                }
            }
            else
            {
                evenSum += (x * evenCount);
                if (x % 2)
                {
                    evenCount = 0;
                    oddCount = n;
                    oddSum += evenSum;
                    evenSum = 0;
                }
            }
            cout << oddSum + evenSum << endl;
        }
    }
    return 0;
}