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
        map<int, int> m;

        vector<int> v(n, 0);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        vector<int> prefix(n, 0);
        prefix[0] = v[0];
        m[prefix[0]] = 1;
        for (int i = 1; i < n; ++i)
        {
            prefix[i] = prefix[i - 1] + v[i];
            m[prefix[i]] = i + 1;
        }

        int ind = 0, maxDif = 10000000;
        for (int i = n - 2; i >= 0; --i)
        {
            int diff = prefix[n - 1] - prefix[i];
            int j = i;
            while (j >= 0 && prefix[j] != diff)
            {
                if (m[prefix[j] - diff])
                    j = m[prefix[j] - diff] - 1;
                else
                    break;
            }
            // cout << prefix[j] << " " << diff << endl;
            if (prefix[j] == diff)
                maxDif = min(diff, maxDif);
        }
        if(maxDif == 10000000)
        cout << n - 1 << "\n";
        else{
            int i = n-1,count = 0;
            while(i >= 0 && prefix[i] != maxDif)
            {
                count += m[prefix[i]] - m[prefix[i] - maxDif]-1;
                i = m[prefix[i]- maxDif] - 1;
            }
            count += m[prefix[i]] - 1;
            cout << count << "\n";
        }
    }
    return 0;
}