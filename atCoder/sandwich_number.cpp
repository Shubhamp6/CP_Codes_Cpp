#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;

    int flag = 1;
    if ((s[0] - 'A') < 0 || s[0] - 'A' > 25)
        flag = 0;
    for (int i = 1; i < s.length() - 1; i++)
    {
        if (i == 1 && s[i] - '0' < 1 || s[i] - '0' > 9)
            flag = 0;
        if (s[i] - '0' < 0 || s[i] - '0' > 9)
            flag = 0;
    }
    if (s[s.length() - 1] - 'A' < 0 || s[s.length() - 1] - 'A' > 25)
        flag = 0;
    if (flag && s.length() == 8)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}