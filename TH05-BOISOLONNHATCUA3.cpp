#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, s = 0;
        cin >> n;
        vector<int> a1, a2, a3;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 0)
                s++;
            else if (x % 3 == 0)
                a3.push_back(x);
            else if (x % 3 == 1)
                a1.push_back(x);
            else
                a2.push_back(x);
        }
        sort(a1.begin(), a1.end(), greater<int>());
        sort(a2.begin(), a2.end(), greater<int>());
        int k = min(a1.size(), a2.size());
        if (abs((int)a1.size() - (int)a2.size()) % 3 == 2 && k != 0)
            k--;
        for (int i = 0; i < k; i++)
        {
            a3.push_back(a1[i]);
            a3.push_back(a2[i]);
        }
        k += 2;
        for (int i = k; i < a1.size(); i += 3)
        {
            a3.push_back(a1[i]);
            a3.push_back(a1[i - 1]);
            a3.push_back(a1[i - 2]);
        }
        for (int i = k; i < a2.size(); i += 3)
        {
            a3.push_back(a2[i]);
            a3.push_back(a2[i - 1]);
            a3.push_back(a2[i - 2]);
        }
        sort(a3.begin(), a3.end(), greater<int>());
        for (int i = 0; i < a3.size(); i++)
            cout << a3[i];
        if (a3.size())
            for (int i = 0; i < s; i++)
                cout << 0;
        else
            cout << -1;
        cout << endl;
    }
}