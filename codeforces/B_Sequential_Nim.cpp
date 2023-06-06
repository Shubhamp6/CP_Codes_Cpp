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
for(int i = 0;i < n;i++)
cin >> a[i];
int oneC = 0;
for (int i = 0; i < n; i++)
{
    if(a[i] == 1)
     oneC++;
    else
     break;
}
//cout << oneC << endl;
if(oneC == n){
    if(oneC%2)
     cout << "First" << endl;
    else
     cout << "Second" << endl;
}
else
{
    if(oneC%2)
     cout << "Second" << endl;
    else
     cout << "First" << endl;
}


}
return 0;
}