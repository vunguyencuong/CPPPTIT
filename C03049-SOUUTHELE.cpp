#include<stdio.h>
typedef long long ll;

int count1(ll n)
{
	int odd = 0;
	while(n)
	{
		int x = n%10;
		if(x % 2 != 0 ) odd++;
		n /= 10;
	}
	return odd;
}
int count2(ll n)
{
	int even = 0;
	while(n)
	{
		int x = n%10;
		if(x % 2 == 0) even++;
		n /= 10;
	}
	return even;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		if(n % 2 != 0 && count1(n) > count2(n))
		{
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
