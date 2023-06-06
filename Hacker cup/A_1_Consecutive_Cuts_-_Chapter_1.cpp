#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int ts = 1;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        if (k == 0)
        {
            cout << "Case #" << ts << ": NO" << endl;
            ts++;
            continue;
        }
        int flag = 0;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (flag)
            {
                j++;
                if (a[j] == b[i])
                {
                    continue;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if (a[j] == b[i] && flag == 0)
                flag = 1;
        }

        if (flag)
        {
            int m = j + 1;
            for (int i = 0; i < n - j - 1; i++)
            {
                if (b[i] != a[m])
                {
                    flag = 0;
                    break;
                }
                m++;
            }
        }

        if (flag)
        {
            cout << "Case #" << ts << ": YES" << endl;
        }
        else
            cout << "Case #" << ts << ": NO" << endl;

        ts++;
    }
    return 0;
}