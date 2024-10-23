#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n; cin>> n;
    vector<int> a(n+5);
    int soduong = 0;
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
        if(a[i] > 0) soduong = 1;
    }
    if(soduong == 0)
    {
        int max = -1e7;
        for(int i = 0; i < n; i++)
        {
            if(max < a[i]) max = a[i];
        }
        cout<< max << endl;
        return;
    }
    else
    {
        ll sum = 0, max = 0;
        for(int i = 0; i < n; i++)
        {
            if(max < sum) max = sum;
            sum += a[i];
            if(sum < 0) sum = 0;
        }
        if(max < sum) max = sum;
        cout<< max << endl;
        return;
    }
    return;
}
int main()
{
    int t; cin>> t;
    while(t--)
    {
        solve();
    }
}