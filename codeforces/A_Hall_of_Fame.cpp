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
        string s;
        cin >> s;
        int i, flag = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (abs(s[i] - s[i + 1]) == 6)
            {
                // cout << s[i] - s[i + 1] << i << endl;
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            if (s[i] - s[i + 1] == 6)
                cout << 0 << endl;
            else
                cout << i + 1<< endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}