#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int flag = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] + a[i - 1] > a[i + 1] && a[i + 1] + a[i - 1] > a[i] && a[i] + a[i + 1] > a[i - 1])
            flag = 1;
    }
    if (flag)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}