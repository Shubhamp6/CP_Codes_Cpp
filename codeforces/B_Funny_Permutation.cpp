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
if(n == 3)
cout << -1 << endl;
else{
    for(int i = n;i > (n+1)/2;i--)
      cout << i << " ";
    for(int i = 1; i <= (n+1)/2;i++)
    cout << i << " ";
    cout << endl;
    
}
}
return 0;
}