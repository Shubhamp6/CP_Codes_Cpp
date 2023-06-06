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
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            m[log2(a) + 1]++;
        }
        int ans = 0;
        for (auto i : m)
        {
            if (i.second > 1)
                ans += ((i.second * (i.second - 1)) / 2);
        }
        cout << ans << endl;
    }
    return 0;
}