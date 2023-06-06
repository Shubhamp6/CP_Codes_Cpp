#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;

    int noDigits = 0, n1 = n;
    vector<int> v;
    while (n)
    {
        int r = n % 10;
        int i;
        for (i = 0; i < v.size() && i < r; i++)
        {
            v[i] += pow(10, noDigits);
        }
        while (i < r)
        {
            v.push_back(pow(10, noDigits));
            i++;
        }
        noDigits++;
        n /= 10;
    }

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}