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
        int n, m;
        cin >> n >> m;

        vector<int> v(m, 0);

        set<int> s;
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            v[i] = a;
        }

        for (int i = 0; i < n; i++)
            s.insert(i + 1);

        vector<int> pos(n, -1);
        int j = n - 1;
        for (int i = 0; i < m; i++)
        {
            if (s.find(v[i]) == s.end())
            {
                s.insert(v[i]);
                pos[j] = i + 1;
                s.erase(j + 1);
                j--;
            }
            if (j < 0)
                break;
        }

        for (int i = 0; i < n; i++)
        {
            cout << pos[i] << " ";
        }
        cout << endl;
    }
    return 0;
}