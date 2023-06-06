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
        int a[n], odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2)
                odd++;
            else
                even++;
        }
        if (k % 2)
        {
            if (odd)
            {
                odd--;
                if (((odd / 2) + (even / 2)) * 2 + 1 >= k)
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
            else
                cout << "No" << endl;
        }
        else
        {
            if (odd && even)
            {
                even--;
                odd--;
                if (((odd / 2) + (even / 2)) * 2 + 2 >= k)
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
            else
                cout << "No" << endl;
        }
    }
    return 0;
}