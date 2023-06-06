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
        vector<int> v;
        int minE1 = INT_MAX, minE2 = INT_MAX, maxE1 = INT_MIN, maxE2 = INT_MIN, flag1 = 1, flag2 = 1;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());
        minE1 = minE2 = v[0];
        maxE1 = maxE2 = v[n - 1];

        int ans1 = INT_MIN;
        for (int i = n - 1; i > 0; i--)
        {
            if ((v[i] - minE1) + (v[i] - v[i - 1]) > ans1)
                ans1 = (v[i] - minE1) + (v[i] - v[i - 1]);
        }

        // cout << max(((maxE1 - minE1) + (maxE1 - maxE2)), (minE2 - minE1) + (maxE1 - minE1)) << endl;
        for (int i = 0; i < n - 1; i++)
        {
            if ((maxE1 - v[i]) + (v[i + 1] - v[i]) > ans1)
                ans1 = (maxE1 - v[i]) + (v[i + 1] - v[i]);
        }
        cout << ans1 << endl;
    }
    return 0;
}