#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, G;
    cin >> n >> G;

    vector<int> v(n, 0);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
    }

    int minPro = INT_MAX;
    vector<vector<int>> ans;
    for (int i = 1; i < pow(2, n); i++)
    {
        int j = i;
        int rating = 0, noP = 0, k = 1;
        vector<int> minNum;
        while (k <= n)
        {
            if (j & 1)
            {
                rating += v[n - k];
                noP++;
                minNum.push_back(n - k + 1);
            }
            j = j >> 1;
            k++;
        }
        if ((int)((rating * 100) / total) >= G)
        {
            if (minPro > noP)
            {
                ans.clear();
                minNum.push_back((rating * 100) / total);
                ans.push_back(minNum);
                minPro = noP;
            }
            else if (minPro == noP)
            {
                minNum.push_back((rating * 100) / total);
                ans.push_back(minNum);
            }
        }
    }

    reverse(ans.begin(), ans.end());
    cout << minPro << " " << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        reverse(ans[i].begin(), ans[i].end());
        for (int j = 0; j < ans[i].size() - 1; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << ans[i][ans[i].size() - 1] << endl;
    }

    return 0;
}