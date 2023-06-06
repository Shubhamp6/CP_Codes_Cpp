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
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        if (a * n + b < s)
            cout << "NO"
                 << "\n";
        else
        {
            int x = min(s / n, a);
            int y = s - x*n;
            if (y > b)
                cout << "NO"
                     << "\n";
            else
                cout << "YES"
                     << "\n";
        }
    }

    return 0;
}