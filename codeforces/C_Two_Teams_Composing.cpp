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
        unordered_map<int, int> m;
        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
            s.insert(a[i]);
        }

        int maxRep = INT_MIN;
        for (auto i : m)
        {
            maxRep = max(maxRep, i.second);
        }

        int size = s.size();
        if (size > maxRep)
            cout << maxRep << endl;
        else if (size < maxRep)
            cout << size << endl;
        else
            cout << size - 1 << endl;
    }
    return 0;
}