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
        if ((n % 2 && (!(k % 2))) || ((!(n % 2)) && k % 2 && n < k * 2) || n < k)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            if ((!(n % 2)) && k % 2)
            {
                for (int i = 0; i < k - 1; i++)
                {
                    cout << 2 << " ";
                }
                cout << n - 2 * (k - 1) << endl;
            }
            else
            {
                for (int i = 0; i < k - 1; i++)
                {
                    cout << 1 << " ";
                }
                cout << n - (k - 1) << endl;
            }
        }
    }
    return 0;
}