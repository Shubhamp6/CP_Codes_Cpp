#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int a[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n, 0);
        int noOfColor = 1;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;

            for (int j = 0; j < 11; j++)
            {
                if (!(c % a[j]))
                {
                    if (m[a[j]])
                        v[i] = m[a[j]];
                    else
                    {
                        v[i] = noOfColor;
                        noOfColor++;
                        m[a[j]] = v[i];
                    }
                    break;
                }
            }
        }

        cout << noOfColor - 1 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}