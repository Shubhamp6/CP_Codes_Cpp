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
        vector<int> v;
        v.push_back(a[0]);
        for (int i = 1; i < n - 1; i++)
        {
            if ((a[i - 1] < a[i] && a[i] < a[i + 1]) || (a[i - 1] > a[i] && a[i] > a[i + 1]))
                continue;
            v.push_back(a[i]);
        }
        v.push_back(a[n - 1]);
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}