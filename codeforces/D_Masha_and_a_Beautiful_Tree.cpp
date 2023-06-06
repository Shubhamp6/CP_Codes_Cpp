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
int a[n];
for(int i =0;i < n;i++)
cin >> a[i];
int count = 0,flag = 1;
for(int i = 2;i <= n;i*=2){
    for(int j = 0;j<n;j+=i){
      if(a[j+(i/2)] - a[j] == i/2)
      continue;
      else if(a[j] - a[j+(i/2)] == i/2){
        count++;
         for (int k = j; k < j+(i/2); k++)
         {
            swap(a[k],a[k+(i/2)]);
         }
      }
      else{
        flag = 0;
        break;
      }
    }
    if(!flag)
    break;
}
if(flag){
    cout << count << endl;
}else{
    cout << -1 << endl;
}
}
return 0;
}