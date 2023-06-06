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
        int a, b, n;
        cin >> a >> b >> n;
        if (!(a % b))
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            if ((!(n % a)) && (n % b))
                cout << n << endl;
            else
            {
                n += (a - (n % a));
                while (!(n % b))
                {
                    n += a;
                }
                cout << n << endl;
            }
        }
    }
    return 0;
}