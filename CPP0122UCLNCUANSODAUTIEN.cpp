#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ucln(ll a, ll b)
{
    while(b)
    {
        ll tmp = a%b;
        a = b;
        b = tmp;
    }
    return a;
}

ll bcnn(ll a, ll b)
{
    return ((a*b)/ucln(a,b));
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        ll temp = bcnn(1,n);
        for(int i = 2; i < n; i++)
        {
            int m = i;
            temp = bcnn(temp,m);
        }
        cout<< temp << endl;
    }
}