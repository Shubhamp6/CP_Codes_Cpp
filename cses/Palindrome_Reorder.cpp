#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s, s1;
    cin >> s;

    map<char, int> m;
    int count = 0, f = 0;
    for (int i = 0; i < s.length(); i++)
        m[s[i]]++;
    for (auto i : m)
    {
        if (i.second % 2)
        {
            if (i.second % 2)
                count++;
        }
    }

    if (count > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        char l;
        int flag = 0;
        for (auto i : m)
        {
            if (i.second % 2 == 0)
            {
                for (int j = 0; j < i.second / 2; j++)
                {
                    s1 += i.first;
                }
            }
            else
            {
                for (int j = 0; j < i.second / 2; j++)
                {
                    s1 += i.first;
                }
                if (i.second % 2)
                {
                    l = i.first;
                    flag++;
                }
            }
        }
        cout << s1;
        if (flag)
            cout << l;
        for (int i = s1.length() - 1; i >= 0; i--)
        {
            cout << s1[i];
        }
        cout << endl;
    }

    return 0;
}