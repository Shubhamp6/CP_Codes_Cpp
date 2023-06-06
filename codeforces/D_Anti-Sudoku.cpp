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
        vector<string> v;
        for (int i = 0; i < 9; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (v[i][j] == '2')
                    v[i][j] = '1';
            }
        }

        for (int i = 0; i < 9; i++)
        {
            cout << v[i] << endl;
        }
    }
    return 0;
}