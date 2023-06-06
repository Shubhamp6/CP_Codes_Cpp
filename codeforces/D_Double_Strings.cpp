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
        vector<string> s;
        map<string, string> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            string s1;
            cin >> s1;
            s.push_back(s1);
            m[s1] = s1;
        }
        for (int i = 0; i < n; i++)
        {
            string s2;
            s2 = s[i][0];
            int flag = 0;
            int j = 1;
            string s1;
            s1.clear();
            while (j <= s[i].length())
            {
                if (m[s2] == s2 && s2.compare(s[i]) != 0 && s2 != s1)
                {
                     cout << s2 << endl;
                    // cout << s[i] << endl;
                    if (j < s[i].length() - 1)
                    {
                        s2.clear();
                    }
                    else
                    {
                        flag = 1;
                        j++;
                    }
                }
                else
                {
                    s2 = s2 + s[i][j];
                    cout << s2 << endl;
                    j++;
                }
            }
            a[i] = flag;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}