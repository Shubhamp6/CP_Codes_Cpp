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
int minJ = INT_MIN,curJ = 0;
for(int i = 0;i < s.length();i++){
    if(s[i] == 'L')
     curJ++;
    minJ = max(curJ,minJ);
    if(s[i] == 'R')
     curJ = 0;
}
cout << minJ + 1<< endl;
}
return 0;
}