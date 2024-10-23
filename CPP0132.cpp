#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        int m;
        for( ll i = 2; i*i <= n; i+=1)
        {
            while(n % i == 0 )
            {   
                m = i;
                n /= i;
            }
        }
        if(n != 1)
        {
            cout<< n;
        }
        else cout<< m;
        cout<< endl;
    }
}