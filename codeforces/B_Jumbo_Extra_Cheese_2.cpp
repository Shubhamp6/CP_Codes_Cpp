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
        int peri = 0;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            peri += 2 * min(a, b);
            v.push_back(max(a, b));
        }
        sort(v.begin(), v.end());
        peri += v[0];
        for (int i = 1; i < n; i++)
        {
            peri += (v[i] - v[i - 1]);
        }
        peri += v[n - 1];
        cout << peri << endl;
    }
    return 0;
}