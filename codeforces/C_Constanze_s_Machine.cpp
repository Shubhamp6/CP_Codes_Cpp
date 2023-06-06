#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    vector<int> fib(100001,0);
    fib[0] = fib[1] = 1;
    for (int i = 2; i < 100001; i++)
    {
        fib[i] = (fib[i-1] + fib[i - 2])%MOD;
    }
    
    string s;
    cin >> s;

    long long numberOfStrings = 1;
    int countN = 0, countU = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'm' || s[i] == 'w')
        {
            cout << 0 << endl;
            return 0;
        }

        if (s[i] == 'n')
            countN++;
        else
        {

            if (countN)
                numberOfStrings = (numberOfStrings * fib[countN]) % MOD;
            countN = 0;
        }

        if (s[i] == 'u')
            countU++;
        else
        {
            if (countU)
                numberOfStrings = (numberOfStrings * fib[countU]) % MOD;
            countU = 0;
        }

        if (s.length() - 1 == i && s[i] == 'n')
        {
            if (countN)
                numberOfStrings = (numberOfStrings * fib[countN]) % MOD;
        }
        if (s.length() - 1 == i && s[i] == 'u')
        {
            if (countU)
                numberOfStrings = (numberOfStrings * fib[countU]) % MOD;
        }
    }

    cout << numberOfStrings << endl;

    return 0;
}