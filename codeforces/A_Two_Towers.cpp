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
        string b1, b2;
        cin >> b1 >> b2;

        int count1 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (b1[i] == b1[i + 1])
                count1++;
        }

        int count2 = 0;
        for (int i = 0; i < m - 1; i++)
            if (b2[i] == b2[i + 1])
                count2++;
       if(count2 + count1 > 1)
       cout << "NO" << endl;
       else if((count2 == 1 && b1[n-1] == b2[m-1]) || (count1 == 1 && b1[n-1] == b2[m-1]))
       cout << "NO" << endl;
       else
       cout << "YES" << endl;
    }
    return 0;
}