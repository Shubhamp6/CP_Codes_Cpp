#include <bits/stdc++.h>
using namespace std;
#define int long long
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
        vector<int> a;

        int c = 0, minCur = INT_MAX;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '+')
                c++;
            else
                c--;
            a.push_back(c);
            minCur = min(minCur, c);
        }
        if (minCur >= 0)
            cout << s.length() << endl;
        else
        {
            int init = 1 - minCur;
            int res = s.length();
            int cur = 0;
            for (int i = 0; i < s.length(); i++)
            {
                // cout << res << endl;
                if ((-a[i]) > cur)
                {
                    res += i + 1;
                    cur++;
                }
                if (cur == init)
                    break;
            }
            cout << res << endl;
        }
    }
    return 0;
}