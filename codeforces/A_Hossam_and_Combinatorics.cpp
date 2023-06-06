#include <bits/stdc++.h>
using namespace std;
#define int long long
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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        sort(a, a + n);
        if (a[0] == a[n - 1])
            cout << ((m[a[0]] - 1) * m[a[0]]) << endl;
        else
            cout << m[a[0]] * m[a[n - 1]] * 2 << endl;
    }
    return 0;
}