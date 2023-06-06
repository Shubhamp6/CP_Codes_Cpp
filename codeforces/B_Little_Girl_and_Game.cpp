#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }

    int count1 = 0;
    for (auto i : m)
    {
        if (i.second % 2 == 1)
            count1++;
    }
    if (count1 <= 1)
        cout << "First" << endl;
    else if (s.length() % 2 == 1)
        cout << "First" << endl;
    else
        cout << "Second" << endl;

    return 0;
}