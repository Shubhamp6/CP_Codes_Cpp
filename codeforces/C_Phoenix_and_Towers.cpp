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
        int n, m, x;
        cin >> n >> m >> x;

        set<pair<int, int>> t;
        for (int i = 0; i < m; i++)
            t.insert({0, i + 1});

        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            pair<int, int> p = *t.begin();
            t.erase(p);
            cout << p.second << " ";
            t.insert({p.first + a, p.second});
        }
        cout << endl;
    }
    return 0;
}