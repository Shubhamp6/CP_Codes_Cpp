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
        string s, check = "Yes";
        cin >> s;

        int flag = 1, j = 0, i = 0;
        if (s[i] == check[j++])
            j = 0;
        else if (s[i] == check[j++])
            j = 1;
        else if (s[i] == check[j])
            j = 2;
        else
        {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (check[j] != s[i])
            {
                flag = 0;
                break;
            }
            j = (j + 1) % 3;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}