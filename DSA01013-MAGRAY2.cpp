#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<string>> ans;
    vector<string> a;
    a.push_back("0");
    a.push_back("1");
    ans.push_back(a);
    for (int i = 0; i < 9; i++)
    {
        a.clear();
        for (int j = 0; j < ans[i].size(); j++)
        {
            a.push_back('0' + ans[i][j]);
        }
        for (int j = ans[i].size() - 1; j >= 0; j--)
        {
            a.push_back('1' + ans[i][j]);
        }
        ans.push_back(a);
    }
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        vector<int> b;
        for (int i = 0; i < ans[s.length() - 1].size(); i++)
        {
            if (ans[s.length() - 1][i] == s)
            {
                k = i;
                break;
            }
        }
        while (k != 0)
        {
            b.push_back(k % 2);
            k /= 2;
        }
        for (int i = 0; i < s.length() - b.size(); i++)
            cout << 0;
        for (int i = b.size() - 1; i >= 0; i--)
            cout << b[i];
        cout << endl;
    }
}