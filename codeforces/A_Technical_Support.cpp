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
        int flag = 1, as = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'A')
                as++;
            else
            {
                as--;
                // if (qs > as)
                //     qs -= as;
                // else
                //     qs = 0;
                // as = 0;
                // qs++;
            }
            if (as < 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}