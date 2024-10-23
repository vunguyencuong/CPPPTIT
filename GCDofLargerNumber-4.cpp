#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ucln(ll a, ll b)
{
    while(b)
    {
        int tmp = a%b;
        a = b;
        b = tmp;
    }
    return a;
}
ll reduceS2(ll a, string b) // lay b module a
{
    ll mod = 0;
    for(int i = 0; i < b.length(); i++) // duyet tung chu so cua b
    {
        mod = (mod*10+b[i]-'0')%a;
    }
    return mod;
}
int main()
{
    int t;
    cin>> t;
    cin.ignore();
    while(t--)
    {
        ll s1; string s2;
        cin>> s1; cin>> s2;
        cout<< ucln(reduceS2(s1,s2),s1) << endl;
    }
}