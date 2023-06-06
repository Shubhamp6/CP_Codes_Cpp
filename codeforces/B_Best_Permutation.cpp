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
        if (n % 2)
        {
            cout << 1 << " " << 2 << " " << 3 << " ";
            for (int i = n - 2; i >= 4; i--)
            {
                cout << i << " ";
            }
            cout << n - 1 << " " << n << " " << endl;
        }
        else
        {
            for (int i = n - 2; i >= 1; i--)
            {
                cout << i << " ";
            }
            cout << n - 1 << " " << n << endl;
        }
    }
    return 0;
}