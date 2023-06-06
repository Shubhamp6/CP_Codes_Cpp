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
        {
            if (k % 2 && k <= sqrt(n))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if ((!(k % 2) && k <= sqrt(n)))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}