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
            cout << (n + 1) / 2 << " ";
        for (int i = 0; i < n / 2; i++)
        {
            if (n % 2)
                cout << n - i << " " << n / 2 - i << " ";
            else
                cout << n / 2 - i << " " << n - i << " ";
        }
        cout << endl;
    }
    return 0;
}