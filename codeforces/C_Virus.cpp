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
        int n, m;
        cin >> n >> m;
        int a[m];
        vector<int> v;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        sort(a, a + m);
        for (int i = 0; i < m; i++)
        {
            if (!i)
                continue;
            else
            {
                v.push_back(a[i] - a[i - 1] - 1);
            }
        }
        v.push_back((n - (a[m - 1])) + (a[0] - 1));
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int ans = 0, k = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if ((v[i] - (2 * k)) > 0)
                ans += 1;
            v[i] -= ((k * 2) + 2);
            k += 2;
            // cout << v[i] << endl;
            if (v[i] > 0)
                ans += v[i];
        }
        cout << n - ans << endl;
    }
    return 0;
}