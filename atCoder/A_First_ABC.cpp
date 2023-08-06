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
int length = 0;
int a = 0,b = 0,c = 0;
for(int i = 0; i< n;++i){
    if(s[i] == 'A')
    ++a;
    else if(s[i] == 'B')
    ++b;
    else if(s[i] == 'C')
    ++c;
    if(a && b && c)
    {
        cout << i + 1 << "\n";
        return 0;
    }
}
return 0;
}