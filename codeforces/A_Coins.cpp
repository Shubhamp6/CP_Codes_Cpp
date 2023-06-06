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
        int n, k;
        cin >> n >> k;
        if (n % 2)
        {
            if (k % 2)
                cout << "YES"
                     << "\n";
            else
                cout << "NO"
                     << "\n";
        }
        else
            cout << "YES"
                 << "\n";
    }
    return 0;
}