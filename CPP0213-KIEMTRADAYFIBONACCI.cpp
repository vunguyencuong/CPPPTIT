#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> f(95);
bool check(ll n)
{
    for(int i = 0; i <= 92; i++)
    {
        if(n == f[i]) return true;
    }
    return false;
}
int main()
{
    f[0] = 0; f[1] = 1;
    for(int i = 2; i <= 92; i++)
    {
        f[i] = f[i-2] + f[i-1];
    }
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin>> x;
            if(check(x)) cout<< x << " ";
        }
        cout<< endl;
    }
}