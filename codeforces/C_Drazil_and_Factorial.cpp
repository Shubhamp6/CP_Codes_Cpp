#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
int n;
cin >> n;
string s;
cin >> s;
vector<string> v;
v.push_back("0");
v.push_back("0");
v.push_back("2");
v.push_back("3");
v.push_back("322");
v.push_back("5");
v.push_back("53");
v.push_back("7");
v.push_back("7222");
v.push_back("7332");
v.push_back("753");

string ans = "";
for (int i = 0; i < n; i++)
{
    if(s[i] - '0' > 1)
     ans += v[s[i] - '0'];
}

sort(ans.rbegin(),ans.rend());
cout << ans << endl;
return 0;
}