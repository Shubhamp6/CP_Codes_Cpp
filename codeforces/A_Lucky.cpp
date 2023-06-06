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
        if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}