#include <bits/stdc++.h>
using namespace std;

int solve(int x,int y,vector<pair<int,int>> v,int E){
    if()
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int T = 1;
    while (t--)
    {
        int n, E;
        cin >> n >> E;
        vector<pair<int, int>> v;
        for (int i = 0; i < 6; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({y, x});
        }

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());


        T++;
    }
    return 0;
}