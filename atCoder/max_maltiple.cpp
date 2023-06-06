#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, k, d;
    cin >> n >> k >> d;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }

    int mul = -1;
    if (sum % d == 0)
        mul = sum;
    for (int i = k; i < n; i++)
    {
        sum += a[i] - a[i - k];
        if(sum % d == 0)
         mul = max(sum,mul);
    }
    
    cout << mul << endl;
    return 0;
}