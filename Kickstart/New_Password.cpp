#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
int t;
cin >> t;
int T = 1;
while(t--){
    int n;
    string s;
    cin >> n >> s;
    int isNum = 0,isLow =0 ,isUp = 0,isSp=0;
    for(int i =0; i < n;i++){
        if (s[i]>47 && s[i] < 58)
         isNum = 1;
        else if (s[i]>64 && s[i] < 91)
         isUp = 1;
        else if (s[i]>96 && s[i] < 123) 
         isLow = 1;
        else if (s[i] == 35 || s[i] == 38 || s[i] == 64 || s[i] == 42)
         isSp = 1;
    }
    
    if(!isNum)
     s += '1';
    if(!isLow)
     s += 'a';
    if(!isUp)
     s += 'A';
    if(!isSp)
     s += '#';
    if(s.length() < 7){
        while (s.length()<7)
        {
            s += '1';
        }
        
    }
    cout << "Case #" << T <<": " << s << "\n";
    T++;
}
return 0;
}