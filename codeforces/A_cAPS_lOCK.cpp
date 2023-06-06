#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s,s1;
    cin >> s;
    s1 = s;
    int f1 = 0;
    if (s1[0] > 96)
        s1[0] = s1[0] - 32;
    else
        s1[0] = s1[0] +32;
    for (int i = 1; i < s1.length(); i++)
    {
        if (s1[i] < 91)
            s1[i] = s1[i] + 32;
        else
         f1 = 1;
    }
    if(f1)
    cout << s << "\n";
    else
    cout << s1 << "\n";
    return 0;
}