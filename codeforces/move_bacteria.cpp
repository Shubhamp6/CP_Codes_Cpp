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
        vector<char> v;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                v.push_back('(');
            }
            else
            {
                if (v.size())
                {
                    v.pop_back();
                }
                else
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}