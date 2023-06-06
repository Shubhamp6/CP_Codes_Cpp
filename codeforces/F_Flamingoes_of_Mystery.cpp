#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> queryAns;
    for (int i = 2; i <= n; i++)
    {
        cout << "? " << 1 << " " << i << endl;
        int ans;
        cin >> ans;
        queryAns.push_back(ans);
    }
    cout << "? " << 2 << " " << 3 << endl;
    fflush(stdout);
    int ansFor2To3;
    cin >> ansFor2To3;

    vector<int> guess;
    cout << queryAns[1] << endl;
    guess.push_back(queryAns[1] - ansFor2To3);
    for (int i = 1; i < n; i++)
    {
        guess.push_back(queryAns[i] - queryAns[i - 1]);
    }
    cout << "! ";

    for (int i = 0; i < n; i++)
    {
        cout << guess[i] << " " << endl;
    }

    return 0;
}