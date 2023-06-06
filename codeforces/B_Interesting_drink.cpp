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
    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;
        int l = 0, h = n - 1, mid;
        if (a[l] > m)
            cout << 0 << endl;
        else if (a[h] <= m)
            cout << n << endl;
        else
        {
            while (l <= h)
            {
                mid = (l + h) / 2;
                if (m >= a[mid] && m < a[mid + 1])
                    break;
                else if (m < a[mid])
                    h = mid - 1;
                else
                    l = mid + 1;
            }
            cout << mid + 1 << endl;
        }
    }
    return 0;
}