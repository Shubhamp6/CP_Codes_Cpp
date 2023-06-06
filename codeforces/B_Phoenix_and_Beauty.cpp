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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int flag = 1;
        vector<int> v, vr;
        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
        }

        if (m.size() > k)
        {
            cout << -1 << endl;
            continue;
        }

        for (auto i : m)
        {
            v.push_back(i.first);
            i.second--;
        }

        for (int i = v.size() + 1; i <= k; i++)
        {
            v.push_back(1);
        }

        while (n--)
        {

            for (int i = 0; i < k; i++)
            {
                vr.push_back(v[i]);
            }
        }

        cout << vr.size() << endl;
        for (int i = 0; i < vr.size(); i++)
        {
            cout << vr[i] << " ";
        }

        cout << endl;
    }
    return 0;
}