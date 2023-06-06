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

        vector<int> v(n, 0);
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }

        int maxRepEle = INT_MIN;
        for (auto i : m)
            maxRepEle = max(maxRepEle, i.second);

        if (maxRepEle < n - maxRepEle && n % 2)
            cout << 1 << endl;
        else if (maxRepEle < n - maxRepEle)
            cout << 0 << endl;
        else
            cout << 2 * maxRepEle - n << endl;
    }
    return 0;
}