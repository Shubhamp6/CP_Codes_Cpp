#include<bits/stdc++.h>
using namespace std;
#define MAX 100000001
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
bool isPrime[MAX+1];
   memset(isPrime,true,sizeof(isPrime));
   isPrime[0] = false;
   isPrime[1] = false;

   for (int  i = 2; i * i < MAX; i++)
   {
      for (int j = 2*i; j <=MAX; j += i)
      {
          isPrime[j]=false;
      }
      
   }

  for (int i = 1; i <= MAX; i++)
  {
      if (isPrime[i])
      {
          cout << i << endl;
      }
      
  }
int t;
cin >> t;
while(t--){
}
return 0;
}