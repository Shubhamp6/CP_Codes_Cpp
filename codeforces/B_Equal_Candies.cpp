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
        int a[n], min1 = INT_MAX,sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            min1 = min(min1, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + (a[i] - min1);
        }
        cout << sum << endl;
    }
    return 0;
}