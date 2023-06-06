#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    bool isPrime[100001];
    memset(isPrime, 1, sizeof(isPrime));
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i < 100001; i++)

        if (isPrime[i])
        {
            for (int j = 2 * i; j < 100001; j += i)
            {
                isPrime[j] = false;
            }
        }

    int t;
    cin >> t;
    int T = 1;
    while (t--)
    {
        int l;
        cin >> l;
        if (l < 14)
            cout << "Case #" << T << ": " << l << "\n";
        else
        {
            int num;
            if (isPrime[l])
                num = l - 1;
            else
                num = l;
            int fact = 1, coins = INT_MAX;
            for (int i = 2; i < num; i++)
            {
                if (num % i == 0)
                    coins = min(coins, i + 4 + (num / i - 1) * 2);
            }

            if (isPrime[l])
                coins += 1;
            cout << "Case #" << T << ": " << min(coins, l) << "\n";
        }
        T++;
    }
    return 0;
}