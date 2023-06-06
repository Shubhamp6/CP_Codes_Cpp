#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
int t;
cin >> t;
while(t--){
string s1,s2;
cin >> s1 >> s2;
if(s1[s1.length()- 1] > s2[s2.length()-1]){
    cout << "<" << endl;
}else if(s1[s1.length()-1] < s2[s2.length()-1]){
    cout << ">" << endl;
}else{
    int s1X = 0,s2X=0;
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == 'X')
        s1X++;
    }
    for(int i = 0;i < s2.length();i++){
        if(s2[i] == 'X')
        s2X++;
    }
    if((s1X>s2X && s1[s1.length()-1] == 'L')||(s1X<s2X && s1[s1.length()-1] == 'S'))
    cout << ">" << endl;
    else if((s1X>s2X && s1[s1.length()-1] == 'S')||(s1X<s2X && s1[s1.length()-1] == 'L'))
    cout << "<" << endl;
    else
    cout << "=" << endl;
}
}
return 0;
}