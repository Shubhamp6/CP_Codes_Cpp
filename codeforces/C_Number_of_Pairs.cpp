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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            a.push_back(v);
        }
        sort(a.begin(), a.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            count += upper_bound(a.begin(), a.end(), r - a[i]) - a.begin();
            count -= lower_bound(a.begin(), a.end(), l - a[i]) - a.begin();
            if (l <= a[i] * 2 && a[i] * 2 <= r)
                count--;
        }

        cout << count/2 << endl;
    }
    return 0;
}