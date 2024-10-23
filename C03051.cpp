#include<stdio.h>
#include<math.h>
#include<stdbool.h>
typedef long long ll;

bool check(ll n)
{
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll l,r;
        scanf("%lld%lld",&l,&r);
        ll m = sqrt(l);
        if(m != sqrt(l)) m = m+1;
        if(m == 1) m = m+1;
        ll count = 0;
        for(ll i = m; i <= sqrt(r); i++)
        {
            if(check(i)) count++;
        }
        printf("%lld\n",count);
    }
}