#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            a[i] = 1e9;
            for (int j = 1; j <= sqrt(i); j++)
                if (a[i - j * j] != 1e9)
                    a[i] = min(a[i], a[i - j * j] + 1);
        }
        cout << a[n] << endl;
    }
}