#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, u, v, s = 0;
        cin >> n >> m;
        vector<vector<int>> a(n + 1);
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i].size() % 2 == 0)
            {
                s++;
            }
        }
        if (s == n)
        {
            cout << 2 << '\n';
        }
        else if (s == n - 2)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }
}