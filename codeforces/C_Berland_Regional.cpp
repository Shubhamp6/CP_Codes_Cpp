#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
int t;
cin >> t;
while(t--){
int n;
cin >> n;

vector<int> u(n,0),s(n,0);
for(int i = 0;i < n;++i){
    cin >> s[i];
    --s[i];
}

for(int i = 0;i < n;++i){
    cin >> u[i];
    --u[i];
}

vector<vector<int>> v(n);
for(int i = 0;i < n;++i)
v[s[i]].push_back(u[i]);

for(int i = 0;i < n;++i)
sort(v[i].begin(),v[i].end());


}
return 0;
}