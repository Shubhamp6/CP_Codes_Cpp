#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    stack<int> st;
    vector<int> nextMin(n, 0);
    for (int i = 0; i < n; ++i)
    {
        while (!st.empty() && v[st.top()] >= v[i])
            st.pop();
        nextMin[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }

    vector<int> dp(n, 1);
    for (int i = 1; i < n; ++i)
    {
        if (nextMin[i] != -1)
            for (int j = nextMin[i]; j >= 0; --j)
            {
                if (v[i] > v[j] && dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                }
            }
        else
            dp[i] = 1;
    }

    int max_length = *max_element(dp.begin(), dp.end());
    cout << max_length << "\n";
    return 0;
}