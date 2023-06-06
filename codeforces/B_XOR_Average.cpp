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
        if (n % 2 == 0)
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << n + 1 << " ";
            }
            cout << 1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
                cout << 1 << " ";
            cout << endl;
        }
    }
    return 0;
}