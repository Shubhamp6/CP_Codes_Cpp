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
        int a, k;
        cin >> a >> k;
        int a1 = a;
        for (int i = 0; i < k - 1; i++)
        {
            int maxdig = INT_MIN, mindig = INT_MAX;
            while (a1)
            {
                int r = a1 % 10;
                maxdig = max(maxdig, r);
                mindig = min(mindig, r);
                a1 /= 10;
            }
            a += (maxdig * mindig);
            a1 = a;
            if (mindig == 0)
            {
                break;
            }
        }
        cout << a1 << endl;
    }
    return 0;
}