#include <bits/stdc++.h>
using namespace std;
int LCS(string s1, string s2)
{
    int F[s1.size() + 1][s2.size() + 1];
    for (int i = 0; i <= s1.size(); i++)
    {
        for (int j = 0; j <= s2.size(); j++)
        {
           F[i][j] = 0;
        }
    }
    for (int i = 0; i < s1.size(); i++)
    {
        for (int j = 0; j < s2.size(); j++)
        {
            if (s1[i] == s2[j])
                F[i + 1][j + 1] = F[i][j] + 1;
            else
                F[i + 1][j + 1] = max(F[i][j + 1], F[i + 1][j]);
        }
    }
    return F[s1.size()][s2.size()];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << LCS(a, b) << endl;
    }
}