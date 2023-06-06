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
        if (n <= 10)
            cout << n << endl;
        else
        {
            int countDig = 0;
            int firstDig;
            while (n)
            {
                firstDig = n % 10;
                n /= 10;
                countDig++;
            }
            cout << (countDig - 1) * 9 + firstDig << endl;
        }
    }
    return 0;
}