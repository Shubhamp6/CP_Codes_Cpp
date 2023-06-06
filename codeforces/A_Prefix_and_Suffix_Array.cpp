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

        string s1, s2;
        for (int i = 0; i < 2 * n - 2; i++)
        {
            string s;
            cin >> s;
            if (n % 2)
            {
                if (s.length() == n - 2)
                {
                    if (s1.length())
                        s2 = s;
                    else
                        s1 = s;
                }
            }
            else
            {
                if (s.length() == n - 1)
                {
                    if (s1.length())
                        s2 = s;
                    else
                        s1 = s;
                }
            }
        }
        reverse(s2.begin(), s2.end());
        if (s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}