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
            cout << 1 << " ";
            for (int i = 2; i <= n; i++)
            {
                if (i % 2)
                    cout << i - 1 << " ";
                else
                    cout << i + 1 << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (i % 2)
                    cout << i + 1 << " ";
                else
                    cout << i - 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}