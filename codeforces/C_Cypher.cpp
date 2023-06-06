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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            int l;
            cin >> l;
            string s;
            cin >> s;
            for (int j = 0; j < l; j++)
            {
                if (s[j] == 'U')
                    a[i] = (a[i] + 9) % 10;
                else
                    a[i] = (a[i] + 1) % 10;
            }
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}