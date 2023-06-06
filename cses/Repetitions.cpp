#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;

    int count = 1, maxCount = INT_MIN;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
            count++;
        else
            count = 1;
        if (count >= maxCount)
            maxCount = count;
    }
    cout << maxCount << endl;
    return 0;
}