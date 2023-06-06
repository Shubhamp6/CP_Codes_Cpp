#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_set<char> st;
    for (int i = 0; i < k; i++)
    {
        char c;
        cin >> c;
        st.insert(c);
    }

    int count = 1, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (st.find(s[i]) != st.end())
        {
            ans += count;
            count++;
        }
        else
            count = 1;
    }

    cout << ans << endl;

    return 0;
}