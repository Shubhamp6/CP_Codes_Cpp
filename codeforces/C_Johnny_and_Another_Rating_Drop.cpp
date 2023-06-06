#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    vector<long long> v(60, 0);
    for (int i = 0; i < 60; i++)
        v[i] = (pow(2, i) - 1) * 2 + 1;

    while (t--)
    {
        long long n;
        cin >> n;
        long long dif = 0;
        int bitPos = 0;
        int count = log2(n) + 1;
        while (count--)
        {
            if (n & ((long long)1 << bitPos))
                dif += v[bitPos];

            bitPos++;
        }
        cout << dif << endl;
    }
    return 0;
}