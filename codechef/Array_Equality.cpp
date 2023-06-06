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
        int n;
        cin >> n;
        unordered_map<int, int> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }

        int maxEle = INT_MIN;
        for (auto i : m)
        {
            maxEle = max(maxEle, i.second);
        }

        if (maxEle > (n + 1) / 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}