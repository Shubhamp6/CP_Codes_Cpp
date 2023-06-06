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

        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] - '0' == 15)
            {
                if (!ans)
                {
                    if (i == 0)
                        ans += 9;
                    else
                        ans += 10;
                }
                else
                {
                    ans *= 10;
                }
            }
        }
        if (s[0] == '0')
            cout << 0 << "\n";
        else if (ans)
            cout << ans << "\n";
        else
            cout << 1 << "\n";
    }
    return 0;
}