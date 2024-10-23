#include<stdio.h>
#include<math.h>
typedef long long ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        if(n % 2 == 0)
        {
            while(n%2 == 0 && n > 2)
            {
                n /= 2;
            }
        }
        if(n % 2 == 1)
        {
            for(ll i = 3; i <= sqrt(n); i+=2)
            {
                while(n % i == 0 && n > 1)
                {
                    n /= i;
                }
            }
        }
        printf("%lld\n",n);
    }
}