#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int minEle = v[0];
    for (int i = 1; i < n; i++)
        minEle = __gcd(minEle, v[i]);

    int ans = 0;
    for (int i = 1; i * i <= minEle; i++)
    {
        int count = 0;
        if (minEle % i == 0)
        {
            if (minEle % (minEle / i) == 0 && i * i != minEle)
                count++;
            count++;
        }
        ans += count;
    }

    cout << ans << endl;
    return 0;
}