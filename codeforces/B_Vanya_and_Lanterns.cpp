#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    double l;
    cin >> n >> l;
    double a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    double ans = (double)a[0];
    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i + 1] - a[i]) / 2 > ans)
            ans = (double)(a[i + 1] - a[i]) / 2;
    }
    if ((l - a[n - 1]) > ans)
        ans = (double)(l - a[n - 1]);

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}