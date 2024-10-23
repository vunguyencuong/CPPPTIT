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
        if(n < 3) cout<< "YES" << endl;
        else
        {
            ll f1 = 1;
            ll f2 = 1;
            ll f3 = 2;
            while(f3 < n)
            {
                f3 = f1+f2;
                f1 = f2;
                f2 = f3;
            }
            if(f2 == n) cout<< "YES" << endl;
            else cout<< "NO" << endl;
        }   
      // cout<< f2;
    }
}