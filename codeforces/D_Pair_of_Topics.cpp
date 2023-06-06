#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {
        a[i] -= b[i];
    }

    int count = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        int find = -1 * a[i];
        int ind = upper_bound(a, a + n, find) - a;
        if (ind <= i)
            ind += 1;
        count += n - ind;
    }

    cout << count / 2 << endl;
    return 0;
}