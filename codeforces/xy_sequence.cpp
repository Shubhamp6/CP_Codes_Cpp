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
        int n, B, x, y;
        cin >> n >> B >> x >> y;
        int a[n + 1], sum = 0;
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i - 1] + x <= B)
            {
                a[i] = a[i - 1] + x;
            }
            else
            {
                a[i] = a[i - 1] - y;
            }
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}