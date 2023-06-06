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
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int count = 0, num = 0;
        sort(a, a + n);
        reverse(a,a+n);
        for (int i = 0; i < n; i++)
        {
            if ((num + (a[i] - x)) >= 0)
            {
                num += (a[i] - x);
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}