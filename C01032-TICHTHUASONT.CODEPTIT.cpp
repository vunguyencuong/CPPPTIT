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
		int result = 1;
		if( n % 2 == 0)
		{
			result *= 2;
			while(n % 2 == 0)
			{
				n /= 2;
			}
		}
		for(int i = 3; i*i <= n ;i+= 2)
		{
			if(n % i == 0)
			{
				result *= i;
				while(n % i == 0)
				{
					n /= i;
				}
			}
		}
		if(n > 1) result *= n;
		printf("%d\n",result);
	}
}
