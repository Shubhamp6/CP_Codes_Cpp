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
        int alt;
        if (s[0] == '0')
            alt = 1;
        else
            alt = 0;
        string str;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (alt)
                {
                    str += '+';
                    alt = 0;
                }
                else
                {
                    str += '-';
                    alt = 1;
                }
            }else{
                str += '+';
            }
        }
        cout << str << endl;
    }
    return 0;
}