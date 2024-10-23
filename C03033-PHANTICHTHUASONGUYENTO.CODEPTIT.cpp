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
		printf("%d = ",n);
		for(int i = 2; i <= n ;i++)
		{
			int count = 0;
			while(n % i == 0)
			{
				n/= i;
				count++;
			}
			if(count)
			{
				if(count >= 1) printf("%d^%d",i,count);
				//else printf("%d",i);
				if(n > 1)
				{
					printf(" * ");
				}
			}
		}
		printf("\n");
	}
}
