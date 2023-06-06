#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int xs, int ys, int xf, int yf, int k)
{
    if (xs < a[ys] || xf < a[yf])
        return 0;
    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[m];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        int xs, ys, xf, yf, k;
        cin >> xs >> ys >> xf >> yf >> k;
        if (solve(a, xs, ys, xf, yf, k))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}