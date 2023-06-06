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
        int minE = INT_MAX, minI;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (minE > a[i])
            {
                minE = a[i];
                minI = i;
            }
        }
        int i = minI, p = 1, j = minI;
        cout << n - 1 << endl;
        while (i > 0)
        {
            cout << i << " " << minI + 1 << " " << minE + p << " " << minE<< endl;
            i--;
            p++;
        }
        p = 1;
        while (j < n - 1)
        {
            cout << minI + 1 << " " << j + 2 << " " << minE << " " << minE + p << endl;
            j++;
            p++;
        }
    }
    return 0;
}