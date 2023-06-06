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
        vector<int> v(n + 1, n + 1);

        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            int t = min(a, b);
            b = max(a, b);
            a = t;

            v[a] = min(v[a], b);
        }

        for (int i = n-1; i >= 1; i--)
        {
            v[i] = min(v[i],v[i+1]);
        }
        
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            count += (v[i] - i);
        }
        
        cout << count << endl;
    }
    return 0;
}