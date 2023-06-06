#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n],b[n];

    unordered_set<int> s;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
        mp[a[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        b[i] = s.size();
        mp[a[i]]--;
        if(!mp[a[i]])
        s.erase(a[i]);
    }

    while (m--)
    {
        int l;
        cin >> l;
        cout << b[l - 1] << endl;
    }
    return 0;
}