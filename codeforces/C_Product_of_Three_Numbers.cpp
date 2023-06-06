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
        int num = n, k = 0;
        int a[3];
        for (int i = 2; i * i <= n; i++)
        {
            if (num % i == 0)
            {
                if (k == 0)
                {
                    a[k] = i;
                    num /= i;
                    k++;
                }
                else if (k == 1 && num / i != i && a[0] != i && num / i != a[0])
                {
                    a[k] = i;
                    k++;
                    a[k] = num / i;
                    k++;
                }
            }
            if (k == 3)
                break;
        }
        if (k == 3)
        {
            cout << "YES" << endl;
            cout << a[0] << " " << a[1] << " " << a[2] << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}