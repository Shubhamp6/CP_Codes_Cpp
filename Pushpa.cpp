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
        int a[n], max1 = INT_MIN, max2 = INT_MIN, ele = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
            max1 = max(max1, a[i]);
        }

        for (auto i : m)
        {
            max2 = max(max2, i.second + i.first - 1);
        }
        cout << max(max1, max2) << endl;
    }
    return 0;
}