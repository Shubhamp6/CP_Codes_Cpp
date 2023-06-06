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
        int count0 = 0, count1 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                count0++;
            else
                count1++;
        }
        if (count0 && count1)
        {
            string t;
            int i = 0, c = s[0] - 48;
            t += s[0];
            while (i < 2 * s.length() - 1)
            {
                if (c)
                {
                    t += '0';
                    i++;
                    c = 0;
                }
                else
                {
                    t += '1';
                    i++;
                    c = 1;
                }
                // if (s[i - 1] - 48 == c)
                // {
                //     if (c)
                //     {
                //         t += '0';
                //         c = 0;
                //     }
                //     else
                //     {
                //         t += '1';
                //         c = 1;
                //     }
                // }
                // else
                // {
                //     t += s[i - 1];
                //     i++;
                //     c = s[i - 1] - 48;
                // }
            }
            cout << t << endl;
        }
        else
            cout << s << endl;
    }
    return 0;
}