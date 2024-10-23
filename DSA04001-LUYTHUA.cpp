#include<bits/stdc++.h>
using namespace std;
long long nmax = 1e9+7;

long long solve(long long m, long long n)
{
    if(n == 0) return 1;
    long long x = solve(m,n/2);
    if(n % 2 == 0)
    {
        return x%nmax * x%nmax;
    }
    return m*(x%nmax * x%nmax) %nmax;
    
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        long long n,k; cin>> n >> k;
        cout<< solve(n,k) << endl;
    }
}