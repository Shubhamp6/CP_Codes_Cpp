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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<int> v[m];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                v[i].push_back(a[j][i]);
            }
        }
        int ind1, ind2, count1 = 0,count2 = 0,count3 = 0;
        for (int i = 0; i < m - 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i][j] == v[i+1][j])
                 count1++;
                else if(v[i][j] < v[i+1][j])
                 count2++;
                else 
                 count3++;
            }
        }
    }
    return 0;
}