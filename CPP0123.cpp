#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll n)
{
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    ll n;
    cin>> n;
    if(check(n)) cout<< "YES" << endl;
    else cout<< "NO" << endl;
}