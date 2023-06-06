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
        cout << n << " ";
        for (int i = 1; i < n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}