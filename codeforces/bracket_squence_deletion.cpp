#include <bits/stdc++.h>
using namespace std;

bool isParenthesisMatching(string exp)
{
    stack<char> s;
    for (int i = 0; i < exp.length(); i++)
    {
        char c = exp[i];
        if (c == '(')
            s.push(c);
        else
        {
            if (s.empty())
                return false;
            else
                s.pop();
        }
    }
    return s.empty();
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;
    cout << isParenthesisMatching(s) << endl;
    return 0;
}