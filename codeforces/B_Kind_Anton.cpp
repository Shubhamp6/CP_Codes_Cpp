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
        int n;
        cin >> n;
        int a[n], b[n];
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = n - 1; i >= 0; i--)
        {
            m[a[i]]--;
            if (b[i] - a[i] == 0)
            {
                continue;
            }
            else
            {
                if (m[(b[i] - a[i]) / abs(b[i] - a[i])])
                {
                    continue;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}