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
        int n, m, k;
        cin >> n >> m >> k;
        if (n / k >= m)
            cout << m << endl;
        else if(((m - n / k) % (k - 1)) )
            cout << n / k - (((m - n / k) / (k - 1)) + 1) << endl;
        else 
            cout << n / k - (((m - n / k) / (k - 1))) << endl;
    }
    return 0;
}