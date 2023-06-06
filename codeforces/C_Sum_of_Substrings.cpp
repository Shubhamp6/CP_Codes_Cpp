#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int i = 0, j = 1;
        while (s[i] != '1' && i <= n)
        {
            i++;
        }
        while (s[n - j] != '1' && j <= n)
        {
            j++;
        }
        if (j <= k + 1 && j != 1 && j < n+1)
        {
            s[n - 1] = '1';
            s[n - j] = '0';
            k -= (j - 1);
        }
        if (i <= k && n > 2 && i != 0 && i < n-1&&s[i]=='1')
        {
            s[0] = '1';
            s[i] = '0';
            k -= i;
        }
        // if (s[n - 1] == '0' && s[n - 2] == '1' && k)
        // {
        //     s[n - 1] = '1';
        //     s[n - 2] = '0';
        // }
        if(n==1&&s[0]=='1'){
            cout << 1 << endl;
            continue;
        }
        int sum = 0;
        for (int k = 0; k < n-1; k++)
        {
            int dec = 0, un = 0;
            if (s[k] == '1')
                dec = 1;
            if (s[k+1] == '1')
                un = 1;
            sum += (dec * 10) + un;
        }
        cout << sum << "\n";
    }
    return 0;
}