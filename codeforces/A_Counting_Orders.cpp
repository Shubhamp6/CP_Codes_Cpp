#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
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
        vector<int> a(n, 0);
        vector<int> b(n, 0);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int flag = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] <= b[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << 0 << "\n";
            continue;
        }

        long long count = 1;
        for (int i = 0; i < n; ++i)
        {
            int c = (lower_bound(b.begin(), b.end(), a[i]) - b.begin());
            count = (count%MOD * (c-i) % MOD) % MOD;
        }
        cout << count << "\n";
    }
    return 0;
}