#include <bits/stdc++.h>
using namespace std;
#define num 1000000007
#define int long long

int modPow(int x, int n)
{
    int res = 1;
    while (n != 0)
    {
        if ((n & 1) != 0)
        {
            res = (res * (x % num)) % num;
        }
        x = (x % num * x % num) % num;
        n = (n >> 1);
    }
    return res;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    cout << modPow(2, n) << endl;
    return 0;
}