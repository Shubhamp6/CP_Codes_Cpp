#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    long long n, k;
    cin >> n >> k;

    vector<long long> v;
    v.push_back(1);
    for (int i = 2; i < sqrt(n); i++)
    {
        if (!(n % i))
        {
            v.push_back(i);
            v.push_back(n / i);
        }
    }

    if ((long long)sqrt(n) * (long long)sqrt(n) == n && n != 1)
        v.push_back(sqrt(n));
    if (n != 1)
        v.push_back(n);

    sort(v.begin(), v.end());

    if (v.size() >= k)
        cout << v[k - 1] << endl;
    else
        cout << -1 << endl;

    return 0;
}