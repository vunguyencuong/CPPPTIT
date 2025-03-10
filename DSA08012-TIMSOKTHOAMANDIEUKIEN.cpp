#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int m[6];
void Try(int n)
{
    v.push_back(n);
    for (int i = 0; i <= 5; i++)
    {
        if (!m[i])
        {
            m[i] = 1;
            Try(n * 10 + i);
            m[i] = 0;
        }
    }
}
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        m[i] = 1;
        Try(i);
        m[i] = 0;
    }
    v.push_back(0);
    sort(v.begin(), v.end());
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, s = 0;
        cin >> l >> r;
        int k1 = lower_bound(v.begin(), v.end(), l) - v.begin();
        int k2 = lower_bound(v.begin(), v.end(), r) - v.begin();
        if (v[k2] != r)
            k2--;
        cout << k2 - k1 + 1 << endl;
    }
}