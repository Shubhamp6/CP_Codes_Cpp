#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;
    string s2;
    for (int i = 0; i < s.length(); i++)
    {
        int s1 = s[i] - 48;
        if (!i)
        {
            if (s1 == 9)
                s2 += to_string(s1);
            else
                s2 += to_string(min(s1, 9 - s1));
        }
        else
        {
            s2 += to_string(min(s1, 9 - s1));
        }
    }
    cout << s2 << endl;

    return 0;
}