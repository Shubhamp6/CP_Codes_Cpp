#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int q;
        scanf("%d", &q);
        while (q--)
        {
            int l, r, x, count = 0;
            scanf("%d %d %d", &l, &r, &x);
            for (int i = l - 1; i < r; i++)
            {
                if ((a[i] ^ x) > (a[i] & x))
                    count++;
            }
            printf("%d\n", count);
        }
    }
    return 0;
}