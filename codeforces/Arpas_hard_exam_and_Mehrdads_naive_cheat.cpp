#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
        return 0;
    }

    switch (n % 4)
    {
    case 0:
        cout << 6 << endl;
        break;
    case 1:
        cout << 8 << endl;
        break;
    case 2:
        cout << 4 << endl;
        break;
    case 3:
        cout << 2 << endl;
        break;
    }
    return 0;
}