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

        int k;
        cin >> k;

        int count = 0, flag = 0;
        string str = "";

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] - '0' < 10)
            {
                int length = 0;
                while (s[i] - '0' < 10)
                {
                    length = length * 10 + s[i] - '0';
                    i++;
                }

                for (int j = 0; j < length; j++)
                {
                    str += s[i];
                }
                count += length;
            }
            else
            {
                str += s[i];
                count++;
            }
            if (count > k)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "unfeasible" << endl;
        else
            cout << str << endl;
    }
    return 0;
}