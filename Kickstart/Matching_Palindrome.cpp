#include <bits/stdc++.h>
using namespace std;

// unordered_map<string, int> m;

int isPalindrome(string s, int l, int r)
{
    // string key = s;
    // key.append(" ");
    // key.append("l");
    // key.append(" ");
    // key.append("r");
    if (l >= r)
        return 1;
    if (s[l] == s[r])
        return isPalindrome(s, l + 1, r - 1);
    return 0;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int T = 1;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i = 1;
        for (; i < n; i++)
        {
            //     int a1, a2;
            //     string key1 = s.substr(i, n - i);
            //     key1.append(" ");
            //     key1.append("i");
            //     key1.append(" ");
            //     int b1 = n-i-1;
            //     key1.append("b1");
            //     string key2 = s.substr(0, i);
            //     key2.append(" ");
            //     key2.append("0");
            //     key2.append(" ");
            //     b1 = i - 1;
            //     key2.append("b1");
            //     if (m.find(key1) != m.end())
            //         a1 = m[key1];
            //     else
            //         a1 = isPalindrome(s.substr(i, n - i), 0, n - i - 1);
            //     if (m.find(key2) != m.end())
            //         a2 = m[key2];
            //     else
            //         a2 = isPalindrome(s.substr(0, i), 0, i - 1);
            //     if (a1 && a2)
            //     {
            //         break;
            //     }
            string str = s;
            str.append(s.substr(0, i));
            // if (isPalindrome(str, 0, n + i - 1))
            // {
            //     break;
            // }
            int l = 0, r = n + i - 1;
            int flag1 = 1;
            while (l <= r)
            {
                if (str[l] != str[r])
                {
                    flag1 = 0;
                    break;
                }
                l++;
                r--;
            }

            string str2 = s.substr(0, i);
            int flag2 = 1;
            l = 0;
            r = i - 1;
            while (l <= r)
            {
                if (str2[l] != str2[r])
                {
                    flag2 = 0;
                    break;
                }
                l++;
                r--;
            }
            if (flag1 && flag2)
            {
                break;
            }
        }
        cout << "Case #" << T << ": " << s.substr(0, i) << "\n";
        T++;
    }
    return 0;
}