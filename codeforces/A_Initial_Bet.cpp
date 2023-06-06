#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int a[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (((!(sum % 5)) && sum))
        cout << sum / 5 << endl;
    else
        cout << -1 << endl;

    return 0;
}