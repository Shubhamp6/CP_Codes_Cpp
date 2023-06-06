#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2)
        {
            n = (n * 3) + 1;
            cout << n << " ";
        }
        else
        {
            n = n / 2;
            cout << n << " ";
        }
    }
    cout << endl;
    return 0;
}