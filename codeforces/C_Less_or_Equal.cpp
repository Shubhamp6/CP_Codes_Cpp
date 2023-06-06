#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    if (k == n)
        cout << a[n - 1] << endl;
    else if (!k)
    {
        if (a[0] > 1)
            cout << a[0] - 1 << endl;
        else
            cout << -1 << endl;
    }
    else if (a[--k] < a[k + 1])
        cout << a[k] << endl;
    else
        cout << -1 << endl;
    return 0;
}