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
        string num;
        cin >> num;
        string a, b;
        int i;
        for (i = 0; i < n; i++)
        {
            int s = num[i] - 48;
            if (s % 10 == 2)
            {
                a += '1';
                b += '1';
            }
            else if (s % 10 == 0)
            {
                a += '0';
                b += '0';
            }
            else
            {
                a += '1';
                b += '0';
                i++;
                break;
            }
        }
        while (i < n)
        {
            a += '0';
            b += num[i];
            i++;
        }
        cout << a << endl
             << b << endl;
    }
    return 0;
}