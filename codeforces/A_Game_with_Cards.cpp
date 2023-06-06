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
        int n, m;
        cin >> n;
        int alice[n];
        for (int i = 0; i < n; i++)
            cin >> alice[i];
        cin >> m;
        int bob[m];
        for (int i = 0; i < m; i++)
            cin >> bob[i];
        sort(alice, alice + n);
        sort(bob, bob + m);

        if (bob[m-1] > alice[n-1])
        {
            cout << "Bob"
                 << "\n";
            cout << "Bob"
                 << "\n";
        }
        else if (bob[m-1] < alice[n-1])
        {
            cout << "Alice"
                 << "\n";
            cout << "Alice"
                 << "\n";
        }
        else
        {
            cout << "Alice"
                 << "\n";
            cout << "Bob"
                 << "\n";
        }
    }
    return 0;
}