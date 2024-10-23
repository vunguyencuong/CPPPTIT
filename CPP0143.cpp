#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        ll f1 = 1;
        ll f2 = 1;
        ll f3;
        int m = n-2;
        if( n <= 2) cout<< 1 << endl;
        else
        {
            while(m)
            {
                f3 = f1+f2;
                f1 = f2;
                f2 = f3;
                m--;  
            }
            cout<< f2 << endl;
        }
    }
}