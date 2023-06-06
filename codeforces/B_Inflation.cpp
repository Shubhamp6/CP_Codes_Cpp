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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int sum = v[0], ans = 0;
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, ((v[i] * 100) - (k * sum) + k - 1) / k);
            sum += v[i];
        }
        cout << ans << endl;
    }
    return 0;
}