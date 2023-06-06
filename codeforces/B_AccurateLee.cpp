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
        int count = 0, flag = 0;
        string s1, s2;
        for (int i = n - 1; i >= 0; i--)
        {
            if (!flag && s[i] == '1')
            {
                s1 += s[i];
            }
            else if (!flag && s[i] == '0')
            {
                s2 += s[i];
                flag = 1;
            }
            else if (flag && s[i] == '0')
            {
                s2 += s[i];
            }
            else
            {
                s[i] = '0';
                s2.clear();
                i++;
                flag = 0;
            }
        }

        s1 += s2;
        reverse(s1.begin(), s1.end());
        cout << s1 << endl;
    }
    return 0;
}