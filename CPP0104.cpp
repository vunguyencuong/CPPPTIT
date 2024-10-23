#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll giaithua(int n)
{
    ll ans = 1;
    for(int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int n;
    cin>> n;
    long long  sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += giaithua(i);
    }
    cout<< sum;
}