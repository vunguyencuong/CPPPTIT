#include<stdio.h>
#include<math.h>
typedef long long ll;

ll min(ll n)
{
    int a[100]={0};
    int size = 0;
    while(n)
    {
        a[size++] = n%10;
        n /= 10;
    }
    ll m = 0;
    for(int i = size-1; i >= 0; i--)
    {
        if(a[i] == 6) a[i] = 5;
        m = m*10 + a[i];
    }
    return m;
} 

ll max(ll n)
{
    int a[100]={0};
    int size = 0;
    while(n)
    {
        a[size++] = n%10;
        n /= 10;
    }
    ll m = 0;
    for(int i = size-1; i >= 0; i--)
    {
        if(a[i] == 5) a[i] = 6;
        m = m*10 + a[i];
    }
    return m;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll x1,x2;
        scanf("%lld%lld",&x1,&x2);
        ll x1_min  = min(x1);
        ll x2_min = min(x2);
        ll x1_max = max(x1);
        ll x2_max = max(x2);
       // printf("%lld %lld %lld %lld\n",x1_min,x2_min,x1_max,x2_max);
        printf("%lld %lld\n",x1_min + x2_min, x1_max + x2_max);
    }
}