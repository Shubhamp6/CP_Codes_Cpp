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
        int a[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (m[i % k] < a[i])
                m[i % k] = a[i];
        }
        int sum = 0;
        for (auto i : m)
            sum += i.second;
        cout << sum << endl;
    }
    return 0;
}