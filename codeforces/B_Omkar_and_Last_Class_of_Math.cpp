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
        int fact = 0;
        for (int i = 2; i < sqrt(1000000007); i++)
        {
            if (n % i == 0)
            {
                fact = i;
                break;
            }
        }
        if (fact)
        {
            cout << n / fact << " " << (n - n / fact) << endl;
        }
        else
            cout << 1 << " " << n - 1 << endl;
    }
    return 0;
}