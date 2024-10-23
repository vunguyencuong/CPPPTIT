#include<stdio.h>
#include<math.h>
typedef long long ll;
ll sum(ll n)
{
	if(n < 10) return n;
	ll sum = 0;
	while(n)
	{
		sum += n%10;
		n/=10;
	}
	return sum;
}

int Sum(ll n)
{
	ll Sum = 0;
	for(int i = 2; i*i <= n; i++)
	{
		while(n % i == 0)
		{
			Sum += sum(i);
			n /= i;
		}
	}
	if(n > 1) Sum += sum(n);
	return Sum;
}

int Snt(ll n)
{
	if(n < 2) return 0;
	for(int i = 2; i*i <= n; i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	ll n;
	scanf("%lld",&n);
	if(Snt(n) == 1)
	{
		printf("NO\n");
	}
	else
	{
		if(sum(n) == Sum(n)) printf("YES\n");
		else printf("NO\n");
	}
}

