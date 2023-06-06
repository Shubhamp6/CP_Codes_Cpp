#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int r, g, b, w;
        cin >> r >> g >> b >> w;
        int odd = r % 2 + g % 2 + b % 2 + w % 2;
        if (odd <= 1)
        {
            cout << "Yes"
                 << "\n";
            continue;
        }
        if (r > 0 && b > 0 && g > 0)
        {
            r--;
            g--;
            b--;
            w += 3;
            odd = r % 2 + g % 2 + b % 2 + w % 2;
            if (odd <= 1)
            {
                cout << "Yes"
                     << "\n";
                continue;
            }
            else
            {
                cout << "No"
                     << "\n";
                continue;
            }
        }
        else
         cout << "No" << "\n";
    }
    return 0;
}