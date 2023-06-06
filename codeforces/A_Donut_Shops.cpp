#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
int t;
cin >> t;
while(t--){
int a,b,c;
cin >> a >> b >> c;
if(a>=c){
    cout << "-1 " << b << "\n";
    continue; 
}
if(a*b<=c){
    cout << 1 << " -1" << "\n";
    continue;
}
cout << 1 << " " << b << "\n";
}
return 0;
}