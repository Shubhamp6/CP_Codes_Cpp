#include <bits/stdc++.h>
using namespace std;
#define int long long

int isSum(int n)
{
    int sum = 0;
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    if (sum == 10)
        return 1;
    return 0;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int k;
    cin >> k;
    int i = 1;
    int n = 19;
    while (i != k)
    {
        n += 9;
        if (isSum(n))
        {
            i++;
        }
    }
    cout << n << endl;
    return 0;
}