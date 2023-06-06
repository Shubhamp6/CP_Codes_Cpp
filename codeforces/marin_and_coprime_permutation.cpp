#include <bits/stdc++.h>
using namespace std;
#define num 998244353
#define int long long

int Moduloarithmetic(int x, int n)
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2)
        {
            cout << 0 << endl;
        }
        else{
            int ans = 1;
            for (int i = 1; i <= (n/2); i++)
            {
               ans = ((ans%num)*(Moduloarithmetic(i,2)%num))%num;
            }
            cout << ans << endl;
            
        }
            
    }
    return 0;
}