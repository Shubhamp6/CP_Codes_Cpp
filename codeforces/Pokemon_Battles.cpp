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
        vector<pair<int, int>> v1, v2;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v1.push_back({a, i});
        }

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v2.push_back({a, i});
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        vector<set<int>> s;
        set<int> st;
        st.insert(-1);
        for(int i = 0;i < n;i++){
            s.push_back(st);
        }
        for (size_t i = 0; i < n; i++)
        {
            st.insert(v1[i].second);
            s.push_back(st);
        }
        
    }
    return 0;
}