#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    if (m % n)
    {
        cout << -1 << "\n";
    }
    // else if(m/n==1)
    // cout << 0 << "\n";
    else
    {
        int count = 0, num = m / n;
        while (!((num) % 2))
        {
            num /= 2;
            count++;
        }
        while (!(num % 3))
        {
            num /= 3;
            count++;
        }
        if (num != 1)
            cout << -1 << "\n";
        else
            cout << count << "\n";
    }

    return 0;
}