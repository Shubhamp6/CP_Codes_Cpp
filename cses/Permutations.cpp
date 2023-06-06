#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (int i = (n / 2) - 1; i >= 0 ; i--)
        {
            if (n % 2)
                cout << n - i * 2 - 1 << " ";
            else
                cout << n - i * 2 << " ";
        }
        for (int i = (n - 1) / 2; i >= 0 ; i--)
        {
            if (n % 2)
                cout << n - i * 2 << " ";
            else
                cout << n - i * 2 - 1 << " ";
        }
    }
    return 0;
}