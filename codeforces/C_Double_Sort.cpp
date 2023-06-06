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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<pair<int, int>> v;
        for (int k = 0; k < n; k++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n - 1; j++)
                {
                    if (a[j] >= a[j + 1] && b[j] >= b[j + 1] && (a[j] != a[j + 1] || b[j] != b[j + 1]))
                    {
                        swap(a[j], a[j + 1]);
                        swap(b[j], b[j + 1]);
                        v.push_back({j, j + 1});
                    }
                }
            }
        }

        int flag = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1] || b[i] > b[i + 1])
                flag = 0;
        }

        if (flag && (v.size() <= 10000))
        {
            cout << v.size() << "\n";
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i].first + 1 << " " << v[i].second + 1 << "\n";
            }
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}