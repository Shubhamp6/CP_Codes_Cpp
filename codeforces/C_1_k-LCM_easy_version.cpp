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
        int n, k;
        cin >> n >> k;
        if (n % 2)
            cout << n / 2 << " " << n / 2 << " " << 1 << endl;
        else
        {
            if ((n / 2) % 2)
                cout << (n / 2) - 1 << " " << (n / 2) - 1 << " " << 2 << endl;
            else
                cout << n / 2 << " " << n / 4 << " " << n / 4 << endl;
        }
    }
    return 0;
}