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
        cin >> n >> m;
        if (n % 2 && m % 2)
            cout << "Tonya" << endl;
        else if ((!(n % 2)) && !(m % 2))
            cout << "Tonya" << endl;
        else if ((!(n % 2)) && (m % 2))
            cout << "Burenka" << endl;
        else
            cout << "Burenka" << endl;
    }
    return 0;
}