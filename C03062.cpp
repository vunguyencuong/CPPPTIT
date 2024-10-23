#include<stdio.h>
#include<math.h>
#include<stdbool.h>
typedef long long ll; 

ll UCLN(ll a, ll b)
{
    while(a)
    {
        if(a < b)
        {
            int tmp = a;
            a = b;
            b = tmp;
        }
        a = a%b;
    }
    return b;
}

ll BCNN(ll a, ll b)
{
    return (a*b)/UCLN(a,b);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int m;
        scanf("%d%d",&n,&m);
        ll num = 1;
        for(int i = n; i <= m; i++)
        {
            if(num % i != 0)
            {
                m = BCNN(num,i);
            }
        }
        printf("%lld\n",num);
    }
}