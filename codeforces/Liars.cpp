#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
int n;
cin >> n;

vector<pair<int,int>> v;
for (int i = 0; i < n; i++)
{
    int a,b;
    cin >> a >> b;
    if(a <= i+1 && b >= i + 1)
    v.push_back({a,b});
}

return 0;
}