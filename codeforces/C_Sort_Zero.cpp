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
        int a[n];
        map<int, int> m;
        unordered_set<int> s;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            v.push_back(a[i]);
            if (a[i] > a[i + 1] || (s.find(a[i + 1]) != s.end()))
            {
                for (int j = 0; j < v.size(); j++)
                {
                    s.insert(v[j]);
                }
                v.clear();
            }
        }
        cout << s.size() << endl;
    }
    return 0;
}