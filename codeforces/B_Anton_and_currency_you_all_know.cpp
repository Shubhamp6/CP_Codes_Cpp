#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;
    int smallestEven = 10;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] - '0') % 2 == 0)
        {
            if (s[i] < s[s.length() - 1])
            {
                smallestEven = s[i] - '0';
                break;
            }
            else
            smallestEven = s[i] - '0';
        }
    }
    if (smallestEven == 10)
        cout << -1 << endl;
    else if (smallestEven <= s[s.length() - 1] - '0')
    {
        int flag = 1;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] - '0' == smallestEven && flag)
            {
                flag = 0;
                cout << s[s.length() - 1];
            }
            else
                cout << s[i];
        }
        cout << smallestEven << endl;
    }
    else
    {
        vector<char> v;
        v.push_back(smallestEven + '0');
        int flag = 1;
        for (int i = s.length() - 2; i > -1; i--)
        {
            if (s[i] - '0' == smallestEven && flag)
            {
                flag = 0;
                v.push_back(s[s.length() - 1]);
            }
            else
                v.push_back(s[i]);
        }
        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}