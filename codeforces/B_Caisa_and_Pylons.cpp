#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int h[t];
    for (int i = 0; i < t; i++)
        cin >> h[i];
    int help = h[0];
    int curHealth = 0;
    for (int i = 0; i < t - 1; i++)
    {
        if (curHealth + (h[i] - h[i + 1]) < 0)
        {
            help += abs(h[i] - h[i + 1]) - curHealth;
            curHealth = 0;
        }
        else
            curHealth += (h[i] - h[i + 1]);
    }
    cout << help << endl;

    return 0;
}