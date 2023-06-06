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
        if (n % 3 == 0)
            cout << n / 3 << endl;
        else if (n % 3 == 2)
            cout << (n / 3) + 1 << endl;
        else
            cout << ((n - 3) / 3) + 2 << endl;
    }
    return 0;
}