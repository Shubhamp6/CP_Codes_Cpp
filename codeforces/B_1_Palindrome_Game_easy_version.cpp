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
        int count = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                count++;
                if (n % 2 && i == (n / 2))
                    flag = 1;
            }
        }
        if (count == 1)
            cout << "BOB" << endl;
        else if (flag)
            cout << "ALICE" << endl;
        else
            cout << "BOB" << endl;
    }
    return 0;
}