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
        string s;
        cin >> s;
        int n = s.length();
        vector<int> v(n, 0);
        v[n - 1] = s[n - 1] - '0';
        for (int i = n - 2; i > -1; i--)
        {
            v[i] = min(v[i + 1], s[i] - '0');
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '9')
                continue;
            if (s[i] - '0' > v[i])
                s[i] = s[i] + 1;
        }
        sort(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}