#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        ll n,a,b;
        cin>> n >> a >> b;
        if((double)b/2 >= a)
        {
            cout<< n*a << endl;
        }
        else
        {
    
            cout<< (n/2)*b + (n%2)*a << endl;
        }
    }
    
}