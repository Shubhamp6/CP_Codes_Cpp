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
        int n, r;
        cin >> n >> r;
       // int b[n][n];
        //memset(b, 0, sizeof(b));
        for (int i = 0; i < r; i++)
        {
            int a, b;
            cin >> a >> b;
        }
        if (r < n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}