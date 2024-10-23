#include<stdio.h>
#include<math.h>
typedef long long ll;

int main()
{
    ll n,k;
    scanf("%lld%lld",&n,&k);
    ll count = 0;
    for(int i = 2; i  <= n; i+=2)
    {
        int m = i;
        if(m % 2== 0)
        {
    
            while(m%2 == 0)
            {
                m /= 2;
                count++;
            }
        }
    }
   // printf("%lld\n",count);
    if(count >= k) printf("Yes");
    else printf("No");
}