#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
int t;
cin >> t;
while(t--){
string s;
cin >> s;
string ans = s;
reverse(s.begin(),s.end());
ans += s;
cout << ans << endl;
}
return 0;
}