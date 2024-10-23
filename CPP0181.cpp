#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        ll a,x,y;
        cin>> a >> x >> y;
        ll b = __gcd(x,y);
        for(int i = 1; i <= b; i++) cout<< a;
        cout<< endl;
    }
}