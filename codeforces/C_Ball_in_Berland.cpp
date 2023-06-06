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
        int a, b, k;
        cin >> a >> b >> k;
        vector<int> boys(k, 0);
        vector<int> aRep(a, 0);
        vector<int> girls(k, 0);
        vector<int> bRep(b, 0);

        for (int i = 0; i < k; i++)
        {
            cin >> boys[i];
            aRep[--boys[i]]++;
        }

        for (int i = 0; i < k; i++)
        {
            cin >> girls[i];
            bRep[--girls[i]]++;
        }

        long long pairsCount = 0;
        for (int i = 0; i < k; i++)
            pairsCount += k - aRep[boys[i]] - bRep[girls[i]] + 1;

        cout << pairsCount / 2 << endl;
    }
    return 0;
}