#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;

    int a[s.length()];
    a[0] = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
            a[i] = a[i - 1] + 1;
        else
            a[i] = a[i - 1];
    }

    int m;
    cin >> m;
    while (m--)
    {
        int a1, b;
        cin >> a1 >> b;
        cout << a[b - 1] - a[a1 - 1] << endl;
    }
    return 0;
}