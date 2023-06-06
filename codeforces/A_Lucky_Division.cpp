#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 2; i <= n; i++)
    {
        if (!(n % i))
        {
            int j = i, f1 = 0;
            while (j)
            {
                if (j % 10 != 4 && j % 10 != 7)
                {
                    f1 = 1;
                    break;
                }
                j = j / 10;
            }
            if (!f1)
                flag = 1;
        }
    }

    if (flag)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
    return 0;
}