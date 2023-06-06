#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> v1;
    vector<int> v2;
    int dam1 = 0, dam2 = 0;
    v1.push_back(0);
    v2.push_back(0);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
            dam1 += a[i] - a[i + 1];
        v1.push_back(dam1);
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] > a[i - 1])
            dam2 += a[i] - a[i - 1];
        v2.push_back(dam2);
    }
    while (m--)
    {
        int s, t;
        cin >> s >> t;
        s--;
        t--;
        if (s < t)
            cout << v1[t] - v1[s] << endl;
        else
            cout << v2[n - t - 1] - v2[n - s - 1] << endl;
    }
    return 0;
}