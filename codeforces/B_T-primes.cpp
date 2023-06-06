#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MAX 1000001

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    bool isPrime[MAX];
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i <= MAX; i++)
    {
        for (int j = 2 * i; j <= MAX; j += i)
        {
            isPrime[j] = false;
        }
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == 1)
            cout << "NO" << endl;
        else if (sqrt(num) == (int)sqrt(num) && isPrime[(int)sqrt(num)])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}