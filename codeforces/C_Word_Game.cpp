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
        int n;
        cin >> n;

        vector<vector<string>> v;
        vector<set<string>> s;
        int score[3];
        memset(score, 0, sizeof(score));
        for (int i = 0; i < 3; i++)
        {
            vector<string> r;
            set<string> f;
            for (int j = 0; j < n; j++)
            {
                string st;
                cin >> st;
                r.push_back(st);
                f.insert(st);
            }
            v.push_back(r);
            s.push_back(f);
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((s[0].find(v[i][j]) == s[0].end()) && (s[1].find(v[i][j]) == s[1].end()) && (s[2].find(v[i][j]) == s[2].end()))
                    continue;
                else if ((s[0].find(v[i][j]) != s[0].end()) && (s[1].find(v[i][j]) != s[1].end()) && (s[2].find(v[i][j]) != s[2].end()))
                {
                    s[0].erase(v[i][j]);
                    s[1].erase(v[i][j]);
                    s[2].erase(v[i][j]);
                }
                else if ((s[0].find(v[i][j]) != s[0].end()) && (s[1].find(v[i][j]) != s[1].end()))
                {
                    score[0]++;
                    score[1]++;
                    s[0].erase(v[i][j]);
                    s[1].erase(v[i][j]);
                }
                else if ((s[0].find(v[i][j]) != s[0].end()) && (s[2].find(v[i][j]) != s[2].end()))
                {
                    score[0]++;
                    score[2]++;
                    s[0].erase(v[i][j]);
                    s[2].erase(v[i][j]);
                }
                else if ((s[1].find(v[i][j]) != s[1].end()) && (s[2].find(v[i][j]) != s[2].end()))
                {
                    score[2]++;
                    score[1]++;
                    s[1].erase(v[i][j]);
                    s[2].erase(v[i][j]);
                }
                else
                {
                    score[i] += 3;
                }
            }
        }

        cout << score[0] << " " << score[1] << " " << score[2] << endl;
    }
    return 0;
}