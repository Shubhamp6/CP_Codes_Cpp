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
int n;
cin >> n;
int a[n];
int sum = 0;
for(int i = 0;i < n;i++){
cin >> a[i];
sum += a[i];
}

int curSum = 0,minThick = INT_MAX;
for(int i = 0;i< n;i++){
 curSum += a[i];
 if(sum%curSum == 0){
    int maxThick = i+1;
    int eSum = 0,thick = 0,flag = 1;
    for(int j = i+1;j < n;j++){
        eSum += a[j];
        thick++;
        if(eSum == curSum){
         maxThick = max(maxThick,thick);
         eSum = 0;
         thick = 0;
         }else if(eSum > curSum){
            flag = 0;
            break;
         }
    }
    if(flag && eSum == 0)
     minThick = min(minThick,maxThick);
 }
}

cout << minThick << endl;


}
return 0;
}