#include <bits/stdc++.h>
using namespace std;
long long pow2(long long  n) {
    if (n == 0) return 1;
    long long a = 2, res = 1;
    for (; n; n /= 2, a *= a)
        if (n % 2) res *= a;
    return res;
}
void solve(long long  n)
{
    long long x = floor(log(n)/log(2))+1;
    long long mid = pow2(x)/2;
    while(x)
    {
        if(x == 1)
        {
            cout<< 1;
            break;
        }
        if(mid == n)
        {
            cout<< x;
            break;
        }
        if(n > mid)
        {
            n = 2*mid - n;
        }
        x--;
        mid /= 2;
    }
    cout<< " ";
}

int main()
{
    int n;
    cin>> n;
    vector<long long>  a(n);
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        solve(a[i]);
    }


}
