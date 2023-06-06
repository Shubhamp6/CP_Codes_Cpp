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
        int num = INT_MAX, minI;
        for (int i = 0; i < s.length(); i++)
        {
            if (num > s[i])
            {
                minI = i;
                num = s[i];
            }
        }
        if (s.length() == 2 && minI == 0)
            cout << s[1] << "\n";
        else
            cout << s[minI] << "\n";
    }

    return 0;
}