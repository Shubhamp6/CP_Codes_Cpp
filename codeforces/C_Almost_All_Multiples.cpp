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
        if (n % m)
            cout << -1 << endl;
        else
        {
            cout << m << " ";
            for (int i = 2; i <= n - 1; i++)
            {
                if (i == m)
                {
                    int j = 2;
                    int a = j * m;
                    while (n % a)
                    {
                        j++;
                        a = j * i;
                    }
                    cout << a << " ";
                    m = a;
                }
                else
                    cout << i << " ";
            }
            cout << 1 << endl;
        }
    }
    return 0;
}