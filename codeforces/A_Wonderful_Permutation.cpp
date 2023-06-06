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
        int n, k;
        cin >> n >> k;
        int a[n], count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i + 1 <= k)
            {
                if (a[i] > k)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}