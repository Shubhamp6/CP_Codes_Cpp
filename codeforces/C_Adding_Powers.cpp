#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        unordered_map<int, int> m;
        vector<int> v(n,0);
        for(int i =0;i <n;++i)
        cin >> v[i];
        int flag = 1;
        for (int i = 0; i < n; ++i)
        {
            int a = v[i];
            while (a > 0)
            {
                int p = 1, c = 0;
                while (a >= p*k)
                {
                    p = p * k;
                    ++c;
                }
                if (m[c])
                {
                    flag = 0;
                    break;
                }
                else
                {
                    ++m[c];
                    a -= p;
                }
            }
            if(a != 0)
                flag = 0;
            if(!flag)
            break;
            

        }
        if (flag)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}