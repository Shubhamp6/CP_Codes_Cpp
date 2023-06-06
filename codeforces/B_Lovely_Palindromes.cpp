#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s, s1;
    cin >> s;
    s1 = s;
    reverse(s1.begin(), s1.end());
    s += s1;
    cout << s << "\n";
    return 0;
}