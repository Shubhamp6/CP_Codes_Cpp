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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        set<int> s;
        for (int i = n - 1; i >= 0; i--)
        {
            int flag = 1;
            while (flag)
            {
                if (s.find(v[i]) == s.end() && v[i] <= n && v[i] > 0)
                {
                    s.insert(v[i]);
                    flag = 0;
                }
                if (!v[i])
                {
                    flag = 0;
                }
                v[i] = v[i] >> 1;
            }
        }
        if (s.size() == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}