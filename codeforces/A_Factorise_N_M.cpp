#include <bits/stdc++.h>
using namespace std;

int isPrime(int a)
{
    for (int i = 2; i*i <= a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
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
        int i = n + 2;
        while (1)
        {
            if (isPrime(i - n) && (isPrime(i) == 0))
                break;
            i++;
        }
        cout << i - n << endl;
    }
    return 0;
}