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
        int count = 1;
        vector<int> v(n,0);
        for(int i = 0;i < n;++i)
        cin >> v[i];

        int val = v[0];
        for(int i = 0;i < n;++i){
            val = val & v[i];
            if(!val){
                if(i == n - 1)break;
                ++count;
                val = v[i+1];
            }
        }
        if(val)
        --count;
        count = max(count,1);
        cout << count << "\n";
    }
    return 0;
}