#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    int a[m + 1];
    for (int i = 0; i <= m; i++)
        cin >> a[i];
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        int b = a[i] ^ a[m];
        int c = 0;
        while (b)
        {
            b &= (b - 1);
            c++;
        }
        if (c <= k)
            count++;
    }
    cout << count << endl;
    return 0;
}