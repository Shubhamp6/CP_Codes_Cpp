#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> genrate(int numRows)
{
    vector<vector<int>> ans;
    for (int i = 0; i < numRows; i++)
    {
        vector<int> row;
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                row.push_back(1);
            else
            {
                //cout << 1 << endl;
                int sum = ans[i - 1][j - 1] + ans[i - 1][j];
                row.push_back(sum);
            }
        }
        ans.push_back(row);
    }
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    vector<vector<int>> v;
    int n;
    cin >> n;
    v = genrate(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> v1;
    for(int i =0;i < 2;i++){
        vector<int> v2;
        for (int j = 0; j < 2; j++)
        {
            v2.push_back(j);
        }
        v1.push_back(v2);
    }
      
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < v1[i].size(); j++)
        {
            cout << v1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}