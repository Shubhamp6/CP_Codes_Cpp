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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        string s;
        cin >> s;
        map<int, char> m;
        set<int> st;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (st.find(a[i]) == st.end())
            {
                st.insert(a[i]);
                m[a[i]] = s[i];
            }
            else
            {
                if (m[a[i]] != s[i])
                    flag = 0;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}