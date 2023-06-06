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
            cin >> a[i];
        int flag = 1;
        vector<int> v;
        v.push_back(a[0]);
        for (int i = 1; i < n; i++)
        {
            if ((v[i - 1] - a[i] >= 0) && (v[i - 1] - a[i] != v[i - 1] + a[i]))
            {
                flag = 0;
                break;
            }
            else
                v.push_back(v[i - 1] + a[i]);
        }
        if (flag)
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}