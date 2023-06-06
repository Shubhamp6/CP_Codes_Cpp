#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;
    int n = (s.length() / 2) + 1;
    int a[n];
    for (int i = 0; i < s.length(); i = i + 2)
    {
        a[i/2] = s[i] - 48;
    }
    sort(a, a + n);
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
            cout << a[i / 2];
        else
            cout << "+";
    }
    cout << endl;

    return 0;
}