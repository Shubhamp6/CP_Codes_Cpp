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
        int odd = 0;
        vector<int> evenI, oddI;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2)
            {
                odd++;
                oddI.push_back(i + 1);
            }
            else
                evenI.push_back(i + 1);
        }
        if (odd > 2)
        {
            cout << "YES" << endl;
            cout << oddI[0] << " " << oddI[1] << " " << oddI[2] << endl;
        }else if((odd && (n - odd) > 1))
        {
            cout << "YES" << endl;
            cout << oddI[0] << " " << evenI[0] << " " << evenI[1] << endl;
        }else 
         cout << "NO" << endl;
    }
    return 0;
}