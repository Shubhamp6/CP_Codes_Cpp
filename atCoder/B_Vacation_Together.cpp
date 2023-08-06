#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, d;
    cin >> n >> d;
    vector<string> v;
    for (int i = 0; i < n; ++i)
    {
        string a;
        cin >> a;
        v.push_back(a);
    }

    vector<int> a(d, 1);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < d; ++j)
        {
            if (v[i][j] == 'x')
                a[j] = 0;
        }
    }

    int ans = 0, cur = 0;
    for (int i = 0; i < d; ++i)
    {
        if (a[i])
            ++cur;
        else
        {
            ans = max(cur, ans);
            cur = 0;
        }
    }
    ans = max(cur,ans);

    cout << ans << "\n";
    return 0;
}