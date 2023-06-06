#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int k;
    cin >> k;

    string s1, s2;
    cin >> s1 >> s2;

    int match = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[i])
            match++;
    }

    int maxScore = min(match, k) + s1.length() - max(k, match);
    cout << maxScore << endl;
    return 0;
}