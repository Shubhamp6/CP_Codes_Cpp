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
        int n;
        cin >> n;
        if (n > 19)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            int x = 1;
            for (int i = 1; i <= n; i++)
            {
                cout << x << " ";
                x *= 3;
            }
            cout << endl;
        }
    }

    return 0;
}