#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;
    vector<int> v1, v2;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] > 64 && s[i] < 91)
        {
            v1.push_back(i);
        }
        else
        {
            v2.push_back(i);
        }
    }

    if (v1.size() > v2.size())
    {
        for (int i = 0; i < v2.size(); i++)
        {
            s[v2[i]] = s[v2[i]] - 32;
        }
    }
    else
    {
        for (int i = 0; i < v1.size(); i++)
        {
            s[v1[i]] = s[v1[i]] + 32;
        }
    }

    cout << s << endl;

    return 0;
}