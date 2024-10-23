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
		int count = 0;
		for(int i = 1; i*i <= n ;i++)
		{
			if(n % i == 0)
			{
				if(i != n/i)
				{
					if(i % 2 == 0) count++;
					if(n/i % 2 == 0) count++;
				}
				else
				{
					if(i % 2 == 0) count++;
				}
			}
		}
		printf("%d\n",count);
	}
}
