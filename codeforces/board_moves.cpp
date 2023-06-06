#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000000000000007
int noOfMoves(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int x = (((2 * n) + ((n - 2)* 2))*(n-((n+1)/2)) + noOfMoves(n - 2));
    return x;
}

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
        int ans = noOfMoves(n);
        cout << ans << endl;
    }

    return 0;
}