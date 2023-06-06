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
        if (n != 5)
            cout << "NO" << endl;
        else
        {
            string s1 = "Timur";
            int flag1 = 1;
            for (int i = 0; i < n; i++)
            {
                int flag = 0;
                for (int j = 0; j < n; j++)
                {
                    if (s1[i] == s[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (!flag)
                {
                    flag1 = 0;
                    break;
                }
            }

            if (flag1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}