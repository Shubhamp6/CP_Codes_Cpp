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
unordered_map<int,int> m;

for(int i = 0;i < n;++i){
    int a;
    cin >> a;
    ++m[a];
}

int operation = 0;
if(m[-1] > m[1]){
        operation += m[-1] - n/2;
        m[-1] = n/2;
    if(n%2)
        m[1] = n/2 + 1;
    else 
       m[1] = n/2;
}
if(m[-1]%2)
{
 ++operation;
}
cout << operation << "\n";
}
return 0;
}