#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll modu(string a, ll b)
{
    ll mod = 0;
    for(int i = 0; i < a.length(); i++)
    {
        mod = (mod*10 + (a[i]-'0'))%b;
    }
    return mod;
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        string a;
        ll b;
        cin>> a;
        cin>> b;
        cout<< modu(a,b) << endl;
    }
}