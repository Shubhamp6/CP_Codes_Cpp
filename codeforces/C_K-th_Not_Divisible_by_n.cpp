#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int h = k / (n - 1);
        if(k%(n-1))
        cout << (h * n) + (k % (n-1)) << endl;
        else
        cout << (h * n) - 1<< endl;
    }
    return 0;
}