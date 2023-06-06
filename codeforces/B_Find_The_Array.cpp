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

        vector<int> a(n, 0);
        vector<int> b(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int pov = 1;
            while (pov * 2 <= a[i])
                pov *= 2;
            b[i] = pov;
        }

        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}