#include<stdio.h>
#include<math.h>
typedef long long ll;
ll max(ll n)
{
	ll max = 0;
	if(n < 2) return 0;
	while(n % 2 == 0)
	{
		n /= 2;
		max = 2;
	}
	for(ll i = 3; i*i <= n ;i+=2)
	{
		if(n % i == 0)
		{
			max = i;
			while(n % i == 0)
			{
				n /= i;
			}
		}
	}
	if(n > 1) max = n;
	return max;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		printf("%lld\n",max(n));
	}
	
}
