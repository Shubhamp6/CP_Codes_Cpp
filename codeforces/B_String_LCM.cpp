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
        string s1, s2, s1n, s2n;
        cin >> s1 >> s2;
        // if (s1.length() < s2.length())
        // {
        //     string temp = s1;
        //     s1 = s2;
        //     s2 = temp;
        // }
        s1n = s1;
        s2n = s2;
        int flag = 0;
        for (int i = 0; i < 40; i++)
        {

            if (s1n.length() == s2n.length())
            {
                if (!s1n.compare(s2n))
                {
                    flag = 1;
                    break;
                }
            }
            if (s1n.length() < s2n.length())
                s1n += s1;
            else
                s2n += s2;
            // cout << s1.length() << " " << s2.length() << "\n";
        }
        //cout << s2n.length() << "\n";
        if (flag)
            cout << s1n << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}