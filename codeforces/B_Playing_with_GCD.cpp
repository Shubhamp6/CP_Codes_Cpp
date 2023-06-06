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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> v;
            v.push_back(a[0]);
        for (int i = 0; i < n - 1; i++)
        {
            v.push_back(((a[i] * a[i + 1]) / __gcd(a[i], a[i + 1])));
        }
        v.push_back(a[n - 1]);
        vector<int> p;
        int flag = 1;
        for (int i = 0; i < v.size() - 1; i++)
        {
            p.push_back(__gcd(v[i], v[i + 1]));
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] != p[i])
            {
                flag = 0;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}