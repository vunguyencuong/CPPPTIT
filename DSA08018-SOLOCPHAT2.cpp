#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0;
        cin >> n;
        queue<string> dq;
        dq.push("6");
        dq.push("8");
        for (int i = 1; i <= n; i++)
        {
            s += pow(2, i);
        }
        cout << s << endl;
        while (dq.size())
        {
            string k = dq.front();
            cout << k << " ";
            dq.pop();
            if (k.size() != n)
            {
                dq.push(k + "6");
                dq.push(k + "8");
            }
        }
        cout << endl;
    }
}