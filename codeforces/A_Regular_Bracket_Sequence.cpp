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
        string s;
        cin >> s;
        stack<int> st;
        stack<int> stq;
        if (s[0] == ')' || s[s.length() - 1] == '(')
        {
            cout << "NO"
                 << "\n";
            continue;
        }
        if (s.length() % 2)
        {
            cout << "NO"
                 << "\n";
            continue;
        }
        else 
         cout << "YES" << "\n";
    }
    return 0;
}