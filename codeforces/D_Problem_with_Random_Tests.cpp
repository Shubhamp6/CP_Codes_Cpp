#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '0')
            s2[i] = '1';
        else
            s2[i] = '0';
    }

    int longestM = 0, inS, inE, inM = n;
    for (int i = n - 1; i > -1; i--)
    {
        for (int j = n - 1; j > -1; j--)
        {
            int k = i, l = j;
            while (s1[k] == s2[l])
            {
                k--;
                l--;
            }
            if (i - k > longestM)
            {
                inS = j;
                inE = ++l;
                inM = i;
            }
        }
    }

    while (inS <= inE)
    {
        if (s1[inS] == s1[inM])
        {
            s1[i] = '0';
        }
        else
            s1[i] = '1';
        i--;
        inS--;
    }

    cout << s1 << endl;
    return 0;
}