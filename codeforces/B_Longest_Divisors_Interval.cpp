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
        long long n;
        cin >> n;
        int count = 1, i = 2;
        while (true)
        {
            if (n % i == 0)
            {
                ++count;
                ++i;
            }
            else
                break;
        }

        cout << count << "\n";
    }
    return 0;
}