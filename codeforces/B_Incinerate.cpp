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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v;
        vector<int> h, p;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            h.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            p.push_back(a);
        }

        for (int i = 0; i < n; i++)
        {
            v.push_back({h[i], p[i]});
        }
        
        

        sort(h.begin(), h.end());
        sort(v.begin(), v.end());

        p[n-1] = v[n-1].second;
        for (int i = n-2; i >= 0; i--)
            p[i] = min(v[i].second,p[i+1]);

        int maxEle = v[n - 1].first;
        int i = 0;
        while(maxEle > 0 && k > 0)
        {
            maxEle -= k;
            i += k;
            int ind = upper_bound(h.begin(), h.end(), i) - h.begin();
            k -= p[ind];
        }
        if(maxEle > 0)
        cout<< "NO" << endl;
        else
        cout << "YES" << endl;
    }
    return 0;
}

