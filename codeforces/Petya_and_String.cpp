#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    int x = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += 32;
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += 32;
        if (s1[i] > s2[i])
        {
            cout << 1 << endl;
            return 0;
        }
        if (s2[i] > s1[i])
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << x << endl;
    return 0;
}