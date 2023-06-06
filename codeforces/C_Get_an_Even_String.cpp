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
        queue<char> ch;
        string s;
        cin >> s;
        int a = 1;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
            {
              ch.pop();
              continue;
            }
            else
            {
                
                ch.push(s[i]);

            }
            
        }
    }

    return 0;
}