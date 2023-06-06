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
        int num;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0)
                num = a[i];
        }

        sort(a, a + n);
        for (int i = 1; i < n; i++)
        {
            if (num < a[i])
                num += (a[i] - num + 1) / 2;
        }

        cout << num << endl;
    }
    return 0;
}