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

        int count = 0;
        map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            string s1;
            cin >> s1;
            if (s1 == "yes")
            {
                if (!m[s])
                {
                    m[s]++;
                    count++;
                }
                int a;
                cin >> a;
                string str;
                for (int j = 0; j < a; j++)
                {
                    cin >> str;
                    if (!m[str])
                    {
                        m[str]++;
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}