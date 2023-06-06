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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int oddC = 0, evenC = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2)
                oddC++;
            else
                evenC++;
        }
        if (oddC == evenC)
            cout << oddC << "\n";
        else
            cout << min(oddC, evenC) << "\n";
    }
    return 0;
}