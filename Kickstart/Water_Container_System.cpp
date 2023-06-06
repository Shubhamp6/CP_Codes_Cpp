#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int T = 1;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<pair<int, int>> p;
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            cin >> a >> b;
            p.push_back({a, b});
        }
        for (int i = 0; i < q; i++)
        {
            int a;
            cin >> a;
        }
        int i = 0, ans = 0;
        while (q >= pow(2, i))
        {
            ans += pow(2, i);
            q -= pow(2, i);
            i++;
        }
        if (q >= (n - ans))
            ans += q;
        cout << "Case #" << T << ": " << ans << "\n";
        T++;
    }
    return 0;
}