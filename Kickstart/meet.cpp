#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);

int t;
cin >> t;
int a[t];
for (int i = 0; i < t; i++)
{
    cin >> a[i];
}
vector<pair<int,int>> v;
for (int i = 0; i < t; i++)
{
    v.push_back({a[i],i+1});
}
sort(v.begin(),v.end());
for (int i = 0; i < t-1; i++)
{
    if (v[i].first == v[i+1].first)
    {
        cout << v[i].second << " ";
    }
    else{
        cout << v[i].second << endl;
    }
}
cout << v[t-1].second << endl;

return 0;
}