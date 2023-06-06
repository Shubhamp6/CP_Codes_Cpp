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
        int n, a, b;
        cin >> n >> a >> b;

        int i,j;
        for (i = n - 1; i > 0; i--)
        {
            if ((b - a) % i == 0)
                break;
        }

        int c = (b - a) / i;

        int p = ceil(1.0 * a / c);

        int q = max(n - p, i);
        p = n - q;

        for (i = 0, j = a; i < p; i++, j -= c)
            cout << j << " ";

        for (i = 0, j = a + c; i < q; i++, j += c)
            cout << j << " ";

        cout << endl;
    }
    return 0;
}