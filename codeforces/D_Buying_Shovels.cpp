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
        int n, k;
        cin >> n >> k;
        if (n <= k)
            cout << 1 << endl;
        else
        {
            int isPrime = 1, num = n;
            for (int i = 2; i * i <= n; i++)
            {
                // cout << i << endl;
                if (n % i == 0)
                {
                    if (i <= k)
                        num = min(n / i, num);
                    if (n / i <= k)
                        num = min(num, i);
                }
            }
            cout << num << endl;
        }
    }
    return 0;
}