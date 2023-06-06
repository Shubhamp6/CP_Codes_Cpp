#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    int countE = 0, countO = 0;
    int indexE, indexO;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
        if (a % 2)
        {
            countO++;
            indexO = i + 1;
        }

        else
        {
            countE++;
            indexE = i + 1;
        }
    }
    if (countO == 1)
        cout << indexO << endl;
    else
        cout << indexE << endl;
    return 0;
}