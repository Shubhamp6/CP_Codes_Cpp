#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], ones = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i])
            ones++;
    }
    int add = 0, mAdd = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i])
            add--;
        else
            add++;
        if (add > mAdd)
            mAdd = add;
        if (add < 0)
            add = 0;
    }

    cout << ones + mAdd << endl;
    return 0;
}