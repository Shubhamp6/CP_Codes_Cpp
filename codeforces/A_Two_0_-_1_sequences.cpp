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
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int flag = 1;
        int j = m - 1;
        for (int i = n - 1; i >= n - m + 1; i--)
        {
            if (a[i] != b[j])
            {
                flag = 0;
                break;
            }
            j--;
        }
        if (!flag)
            cout << "NO" << endl;
        else
        {
            flag = 0;
            for (int i = n - m; i >= 0; i--)
            {
                if (a[i] == b[0])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}