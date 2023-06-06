#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;
    vector<char> ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U' || s[i] == 'y' || s[i]=='Y')
        {
            continue;
        }
        else if (s[i] < 91)
        {
            ans.push_back('.');
            ans.push_back(s[i] + 32);
        }
        else
        {
            ans.push_back('.');
            ans.push_back(s[i]);
        }
    }
    if (ans.size() == 0)
        cout << '\0' << endl;
    else
    {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i];
        cout << endl;
    }

    return 0;
}