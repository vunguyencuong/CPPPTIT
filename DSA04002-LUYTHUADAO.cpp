#include<bits/stdc++.h>
using namespace std;
long long nmax = 1e9+7;
long long dao(long long n)
{
    long long res = 0;
    while(n)
    {
        res = res*10 + n%10;
        n /= 10;
    }
    return res;
}

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
        long long n; cin>> n;
        cout<< solve(n,dao(n)) << endl;
    }
}