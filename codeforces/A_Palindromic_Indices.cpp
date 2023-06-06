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
        int n;
        cin >> n;
        string s;
        cin >> s;
        char s1 = s[n / 2];
        int count = 0;
        for (int i = (n / 2); i < n; i++)
        {
            if (s[i] == s1)
                count++;
            else
                break;
        }
        if (n % 2)
            cout << (count * 2) - 1 << "\n";
        else
            cout << count * 2 << "\n";
    }
    return 0;
}