#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int count = 0;
    while (n > 0 && m > 0)
    {
        if (n > m && n > 1)
        {
            n -= 2;
            m -= 1;
            count++;
        }
        else if (m > 1)
        {
            n -= 1;
            m -= 2;
            count++;
        }
        else
            break;
    }

    cout << count << endl;
    return 0;
}