#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int k = 0;
    while (n > (5 * pow(2, k)))
    {
        n -= (5 * pow(2, k));
        k++;
    }

    if (0 < n && n <= pow(2, k))
        cout << "Sheldon" << endl;
    else if (pow(2, k) < n && n <= pow(2, k) * 2)
        cout << "Leonard" << endl;
    else if (pow(2, k) * 2 < n && n <= pow(2, k) * 3)
        cout << "Penny" << endl;
    else if (pow(2, k) * 3 < n && n <= pow(2, k) * 4)
        cout << "Rajesh" << endl;
    else
        cout << "Howard" << endl;
    return 0;
}