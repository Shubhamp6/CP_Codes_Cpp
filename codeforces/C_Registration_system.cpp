#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    unordered_map<string, int> m;
    while (t--)
    {
        string s;
        cin >> s;
        if (m.find(s) == m.end())
        {
            m[s] = 0;
            cout << "OK" << endl;
        }
        else
        {
            m[s]++;
            string c;
            int a = m[s];
            while (a)
            {
                c += to_string(a % 10);
                a /= 10;
            }
            reverse(c.begin(), c.end());
            s += c;
            m[s] = 1;
            cout << s << endl;
        }
    }
    return 0;
}