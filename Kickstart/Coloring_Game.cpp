#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int T = 1;
    while (t--)
    {
        int n;
        cin >> n;
        int bot = 1;
        n -= 2;
        int i = 0;
        while (n>=1)
        {
            if (i % 2)
            {
                n -= 2;
                bot++;
            }
            else
            {
                n -= 3;
            }
            i++;
        }
        cout << "Case #" << T << ": " << bot << "\n";
        T++;
    }
    return 0;
}