#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, count = 0;
    cin >> n;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    cout << count << endl;
    return 0;
}