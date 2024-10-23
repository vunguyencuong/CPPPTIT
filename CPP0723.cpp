#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll giaithua(int n)
{
    if(n < 1) return 1;
    int ans = 1;
    for(int i = 2; i <= n; i++) ans *= i;
    return ans;
}

ll Fx(int x)
{
    int ans = 0;
    while(x)
    {
        ans += giaithua(x%10);
        x /= 10;
    }
    return ans;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,a;
        cin>> n >> a;
        ll check1 = Fx(a);
        
    }
}