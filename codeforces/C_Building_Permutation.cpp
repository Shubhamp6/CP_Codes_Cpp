#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    long long stepCount = 0;
    for (int i = 0; i < n; ++i)
    {
        stepCount += (long long)abs(v[i] - i - 1);
    }

    cout << stepCount << "\n";

    return 0;
}