#include <bits/stdc++.h>
using namespace std;

string swap(string s, int l, int r)
{
    char temp = s[l];
    s[l] = s[r];
    s[r] = temp;
    return s;
}

map<string, int> sm;
vector<string> st;
void permutations(string s, int l, int r)
{
    if (l == r)
    {
        if (sm[s] <= 0)
        {
            st.push_back(s);
            sm[s]++;
        }
        return;
    }
    for (int i = l; i <= r; i++)
    {
        permutations(s, l + 1, r);
        s = swap(s, l, i);
        permutations(s, l + 1, r);
        s = swap(s, l, i);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;
    int count = 1;
    map<char, int> m;

    for (auto i : sm)
        i.second = 0;
    permutations(s, 0, s.length() - 1);
    sort(st.begin(), st.end());
    cout << st.size() << "\n";
    for (auto i : st)
        cout << i << "\n";
    return 0;
}