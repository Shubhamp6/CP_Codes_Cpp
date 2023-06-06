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
        cout << n << endl;
        int j = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(i + 1);
        }
        for (int i = 0; i < n; i++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << v[k] << " ";
            }
            cout << endl;
            if(i < n -1)
            swap(v[i + 1], v[j]);
            j++;
        }
    }
    return 0;
}