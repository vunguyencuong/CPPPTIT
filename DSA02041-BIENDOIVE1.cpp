#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;   cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pair<int, int> x, k;
        queue<pair<int, int>> q;
        x.first = n;
        x.second = 0;
        q.push(x);
        while (q.size())
        {
            x = q.front();
            q.pop();
            if (x.first == 1)
            {
                cout << x.second << endl;
                break;
            }
            k.second = x.second + 1;
            if (x.first % 2 == 0)
            {
                k.first = x.first / 2;
                q.push(k);
            }
            if (x.first % 3 == 0)
            {
                k.first = x.first / 3;
                q.push(k);
            }
            if (x.first > 1)
            {
                k.first = x.first - 1;
                q.push(k);
            }
        }
    }
}