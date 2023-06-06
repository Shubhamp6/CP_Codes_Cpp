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
        map<char, int> m;
        for (int i = 0; i < 26; i++)
        {
            m['A' + i] = 1;
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[s[i]])
            {
                sum += 2;
                m[s[i]]--;
            }
            else
            {
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}