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
        if ((sqrt(1 + 8 * n) - 1) / 2 == (int)(sqrt(1 + 8 * n) - 1) / 2)
            cout << (sqrt(1 + 8 * n) - 1) / 2 << endl;
        else
        {
            int a = ((sqrt(1 + 8 * n) - 1) / 2) + 1;
            int b = a;
            int sum = (a * (a + 1)) / 2;
            for (int i = 1; i <= a; i++)
            {
                if (sum - (i + 1) == n)
                {
                    cout << a << endl;
                    break;
                }
                if (i == a)
                    cout<< b + (sum - n) << endl;
            }
        }
    }
    return 0;
}