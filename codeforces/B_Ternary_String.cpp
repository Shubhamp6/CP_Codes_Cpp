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
        int minLen = INT_MAX, curLen = INT_MAX, ind1 = -1, ind2 = -1, ind3 = -1, flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                ind1 = i;
            else if (s[i] == '2')
                ind2 = i;
            else
                ind3 = i;
            if (ind1 > -1 && ind2 > -1 && ind3 > -1)
            {
                flag = 1;
                curLen = max(abs(ind1 - ind2), max(abs(ind2 - ind3), abs(ind1 - ind3))) + 1;
                minLen = min(curLen, minLen);
            }
        }
        if (flag)
            cout << minLen << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}