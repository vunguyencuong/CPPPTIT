#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<long long>> a(n + 1, vector<long long>(m + 1, 1));
        for (int i = n - 1; i >= 0; i--)
            for (int j = m - 1; j >= 0; j--)
                a[i][j] = a[i + 1][j] + a[i][j + 1];
        cout << a[0][0] << endl;
    }
}