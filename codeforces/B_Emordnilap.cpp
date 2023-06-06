#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000007
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
  int sum = ((n * (n-1))%MAX);
  int fact = 1;
  for(int i = 2;i <= n;i++)
  fact = (fact*i)%MAX;
  cout <<( (sum%MAX)*(fact%MAX))%MAX << endl;
}
return 0;
}