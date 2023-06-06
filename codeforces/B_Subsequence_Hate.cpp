#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s.length() < 3)
            cout << 0 << endl;
        else
        {
            int preOnes[s.length()], sufOnes[s.length()];
            int ones = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '1')
                    ones++;
                preOnes[i] = ones;
            }

            ones = 0;
            for (int i = s.length() - 1; i >= 0; i--)
            {
                if (s[i] == '1')
                    ones++;
                sufOnes[i] = ones;
            }

            int minOp = INT_MAX;
            int n = s.length();
            for (int i = 0; i < s.length()-1; i++)
            {
                  int a = min(preOnes[i],i+1-preOnes[i])+min(sufOnes[i+1],(n - i - 1 - sufOnes[i+1]));
                  minOp = min(minOp,a);
            }
            minOp = min(minOp,min(preOnes[s.length()-1],n - preOnes[s.length()-1]));

            cout << minOp << endl;
            
        }
    }
    return 0;
}