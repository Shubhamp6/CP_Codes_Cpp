#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int s, m;
    cin >> m >> s;
    int flag = 1;
    string sm, l;
    int s1 = s, m1 = m;
    if ((s == 0 && m > 1) || (s > m * 9))
    {
        cout << "-1 -1" << endl;
        return 0;
    }
    while (m--)
    {
        if (s > 9)
        {
            l += 9 + '0';
            s -= 9;
        }
        else if (s > 0)
        {
            l += s + '0';
            s = 0;
        }
        else
        {
            l += '0';
        }
    }
    s = s1;
    m = m1;
    while (m--)
    {
        if (s > 9)
        {
            sm += 9 + '0';
            s -= 9;
        }
        else if (s > 0 && m > 0)
        {
            sm += s - 1 + '0';
            s = 1;
        }
        else if (m == 0)
        {
            sm += s + '0';
            s = 0;
        }
        else
        {
            sm += '0';
        }
    }

    reverse(sm.begin(), sm.end());
    cout << sm << " " << l << endl;
    return 0;
}