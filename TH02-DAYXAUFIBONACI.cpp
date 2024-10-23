#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; long long k; cin>> n >> k;
        long long a[n+5]; // độ dài của dãy kí tự = 1 số fibo
        a[1] = 1; a[2] = 1;
        for(int i = 3; i <= n; i++) a[i] = a[i-1] + a[i-2];
        while(true)
        {
            if(n == 1)
            {
                cout<< "A" << endl;
                break;
            }
            else if(n == 2)
            {
                cout<< "B" << endl;
                break;
            }
            if(k > a[n-2])
            {
                k -= a[n-2];
                n--;
            }
            else n -= 2;
        }
    }
}