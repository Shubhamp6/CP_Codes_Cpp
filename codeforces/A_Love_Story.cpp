#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    string base = "codeforces";
    while (t--)
    {
        string s;
        cin >> s;

        int diff = 0;
        for (int i = 0; i < 10; ++i)
        {
            if (base[i] != s[i])
                ++diff;
        }

        cout << diff << "\n";
    }
    return 0;
}