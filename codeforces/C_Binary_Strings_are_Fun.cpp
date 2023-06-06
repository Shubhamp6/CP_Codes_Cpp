#include <bits/stdc++.h>
using namespace std;
#define int long long

int nCr(int n, int r)
{
    if (r > n - r)
        r = n - r;
    int ans = 1;

    for (int i = 1; i <= r; i++)
    {
        ans *= (n - r + i) % 998244353;
        ans /= i;
    }

    return ans % 998244353;
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
        string s;
        cin >> s;
        int count = 0;
        int ones[n], onesCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                onesCount++;
            ones[i] = onesCount;
        }

        for (int i = 0; i < n; i++)
        {
            int countSoFar;
            if (s[i] == '1')
                countSoFar = ones[i];
            else
                countSoFar = i + 1 - ones[i];

            
        }
        cout << count << endl;
    }
    return 0;
}