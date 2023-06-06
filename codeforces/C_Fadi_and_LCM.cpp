#include <bits/stdc++.h>
using namespace std;
#define int long long

int lcm(int a, int b)
{
    return a / __gcd(a, b) * b;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int x;
    cin >> x;

    int a;
    for (int i = 1; i * i <= x; i++)
    {
        if (!(x % i) && lcm(i, x / i) == x)
            a = i;
    }

    cout << a << " " << x / a << endl;

    return 0;
}