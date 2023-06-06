#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < t; i++)
    {
        int a1;
        cin >> a1;
        a.push_back(a1);
    }
    for (int i = 0; i < t - 1; i++)
    {
        int b1;
        cin >> b1;
        b.push_back(b1);
    }
    for (int i = 0; i < t - 2; i++)
    {
        int c1;
        cin >> c1;
        c.push_back(c1);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < t - 1; i++)
    {
        if (a[i] != b[i])
        {
            ans1 = a[i];
            break;
        }
    }

    for (int i = 0; i < t - 2; i++)
    {
        if (c[i] != b[i])
        {
            ans2 = b[i];
            break;
        }
    }

    if (ans1)
        cout << ans1 << endl;
    else
        cout << a[t - 1] << endl;
    if (ans2)
        cout << ans2 << endl;
    else
        cout << b[t - 2] << endl;
    return 0;
}