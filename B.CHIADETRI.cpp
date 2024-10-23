#include <iostream>
using namespace std;
 
long long pow2(int n) {
    if (n == 0) return 1;
    long long res = 1;
    while(n--)
    {
        res *= 2;
    }
    return res;
}

int solve(int n, long long k)
{
    long long mid = pow2(n-1);
    if(k == mid) return n;
    else if(k > mid) return solve(n-1,k-mid);
    else return solve(n-1,k);
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        long long k;
        cin>> n >> k;
        cout<< solve(n,k) << endl;
    }
}
