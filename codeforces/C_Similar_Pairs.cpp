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
        int oddCount = 0, evenCount = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2)
                oddCount++;
            else
                evenCount++;
        }
        sort(a, a + n);
        int pair = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1] + 1)
            {
                pair++;
                i++;
            }
        }

       //cout << evenCount << " " << oddCount << " " << pair << endl;
        if (((!(evenCount % 2)) && (!(oddCount % 2))) || (pair == n / 2))
            cout << "YES" << endl;
        else
        {
            if (pair>0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}