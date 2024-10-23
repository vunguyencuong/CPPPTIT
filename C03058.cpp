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
        int m = 1;
        scanf("%d",&n);
        for(int i = 2; i <= n; i++)
        {
            if(m % i != 0)
            {
                m = BCNN(m,i);
            }
        }
        printf("%lld\n",m);
    }
}