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
        char c;
        cin >> c;
        bool y = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c && i % 2 == 0)
                y = 1;
        }

        if (y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}