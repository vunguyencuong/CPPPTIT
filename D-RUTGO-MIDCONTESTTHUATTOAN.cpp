#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        ll n,k;
        cin>> n >> k;
        if((n/k)%2 != 0) cout<< "YES" << endl;
        else cout<< "NO" << endl;
    }
}