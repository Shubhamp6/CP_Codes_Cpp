#include <bits/stdc++.h>
using namespace std;

int poweredString(int a, int b, string s)
{
    // Write your code here
    int maxI = INT_MIN, ones = 0, zeroes = 0, numO, numZ;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            ones++;
        else
            zeroes++;
        if ((ones*a - zeroes*b) > maxI)
        {
            maxI = (ones*a - zeroes*b);
            numO = ones;
            numZ = zeroes;
        }
        if (ones*a - zeroes*b < 0)
        {
            zeroes = 0;
            ones = 0;
        }
    }
    cout << numO << numZ << endl;
    return ((numO * a) - (numZ * b));
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        string s;
        cin >> a >> b;
        cin >> s;
        cout << poweredString(a,b,s) << endl;
    }
    return 0;
}