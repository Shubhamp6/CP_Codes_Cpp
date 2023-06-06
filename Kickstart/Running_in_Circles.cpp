#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int T = 1;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        int a[l];
        char b[l];
        for (int i = 0; i < l; i++)
        {
            cin >> a[i] >> b[i];
        }
        int count = 0;
        count += (a[0] / n);
        int dis = a[0] % n;
        char dir = b[0];
        for(int i = 1; i < l; i++)
        {
            if (dir == b[i])
            { 
                dis += a[i];
                count += (dis / n);
                dis = dis % n;
            }
            else
            {
                if (dis > a[i])
                    dis -= a[i];
                else
                {
                    dis = (a[i] - dis);
                    dir = b[i];
                }
                count += (dis / n);
                dis = dis % n;
            }
        }
        cout << "Case #" << T << ": " << count << "\n";
        T++;
    }
    return 0;
}