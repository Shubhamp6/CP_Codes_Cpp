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
        map<string, int> m;

        int count = 0;
        for (int i = 1; i < n; i++)
        {
            string str = "";
            str += s[i - 1];
            str += s[i];
            if (m[str])
                continue;
            ++m[str];
            ++count;
        }
        cout << count << "\n";
    }
    return 0;
}