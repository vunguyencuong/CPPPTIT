#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,s,m; cin>> n >> s >> m;
    if(m > n)
    {
        cout<< -1 << endl;
        return;
    }

    if(m == n)
    {
        if(s < 7)
        {
            cout<< s << endl;;
            return;
        }
        else{
            cout<< -1 << endl;
            return;
        }
    }
    int x = s*m;
    if(x % n) x = x/n+1;
    else x = x/n;
    int check = x + x/7; // tính thêm ngày chủ nhật vào
    if(check <= s) cout<< x << endl;
    else cout<< -1 << endl;
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        solve();
    }
}