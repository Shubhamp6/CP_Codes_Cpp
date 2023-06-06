#include <bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll x;
        cin >> n >> x;

        vector<ll> v(n, 0);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        int count = 0, curCount = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            curCount++;
            if (v[i] * curCount >= x)
            {
                count++;
                curCount = 0;
            }
        }

        cout << count << endl;
    }
    return 0;
}