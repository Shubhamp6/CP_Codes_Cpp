#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, a, b;
    cin >> n >> a >> b;
    if (a <= b)
    {
        cout << n - a << endl;
    }
    else
    {
        cout << n - a - (a - b) << endl;
    }

    return 0;
}