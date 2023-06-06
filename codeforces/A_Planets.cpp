#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> v;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
            m[a]++;
        }

        int ans = 0;
        for (auto i : m)
        {
            if (i.second < c)
                ans += i.second;
            else
                ans += c;
        }
        cout << ans << endl;
    }
    return 0;
}