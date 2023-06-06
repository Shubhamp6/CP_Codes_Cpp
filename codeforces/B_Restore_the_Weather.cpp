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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> v1;
        vector<int> v2;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            v1.push_back({a, i});
        }

        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            v2.push_back(a);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        vector<pair<int, int>> ans;

        for (int i = 0; i < n; ++i)
            ans.push_back({v1[i].second, v2[i]});

        sort(ans.begin(),ans.end());
        for (int i = 0; i < n; ++i)
            cout << ans[i].second << " ";
        cout << "\n";
    }
    return 0;
}