#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    int count = a;
    while (a >= b)
    {
        count += (a / b);
        a = a / b + (a%b);
    }
    cout << count<< "\n";
    return 0;
}