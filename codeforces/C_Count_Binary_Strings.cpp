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
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            vector<int> v1;
            for (int j = 0; j < i; j++)
            {
                int a;
                cin >> a;
                v1.push_back(a);
            }
            v.push_back(v1);
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v1[i][0] == 2)
            {
                count = 0;
                break;
            }
            int count1 = 0;
            for (int j = 0; j < i; j++)
            {
                if (a[j] == 2){
                    
                }
            }
        }
    }
    return 0;
}