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
        string s;
        cin >> s;
        int flag = 1;
        if (s[0] != 89 && s[0] != 121)
            flag = 0;
        if (s[1] != 69 && s[1] != 101)
            flag = 0;
        if (s[2] != 83 && s[2] != 115)
            flag = 0;
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}